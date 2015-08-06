#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6121;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6118;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32644_gshared (Enumerator_t6121 * __this, Dictionary_2_t6118 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m32644(__this, ___dictionary, method) (( void (*) (Enumerator_t6121 *, Dictionary_2_t6118 *, const MethodInfo*))Enumerator__ctor_m32644_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32645_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32645(__this, method) (( Object_t * (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m32646_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m32646(__this, method) (( void (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m32646_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2088  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32647_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32647(__this, method) (( DictionaryEntry_t2088  (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32647_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32648_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32648(__this, method) (( Object_t * (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32648_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32649_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32649(__this, method) (( Object_t * (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32649_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32650_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m32650(__this, method) (( bool (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_MoveNext_m32650_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6115  Enumerator_get_Current_m32651_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m32651(__this, method) (( KeyValuePair_2_t6115  (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_get_Current_m32651_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m32652_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m32652(__this, method) (( int64_t (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_get_CurrentKey_m32652_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32653_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m32653(__this, method) (( uint8_t (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_get_CurrentValue_m32653_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m32654_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_Reset_m32654(__this, method) (( void (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_Reset_m32654_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32655_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m32655(__this, method) (( void (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_VerifyState_m32655_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32656_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m32656(__this, method) (( void (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_VerifyCurrent_m32656_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32657_gshared (Enumerator_t6121 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m32657(__this, method) (( void (*) (Enumerator_t6121 *, const MethodInfo*))Enumerator_Dispose_m32657_gshared)(__this, method)
