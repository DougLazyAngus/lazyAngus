#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>
struct Enumerator_t6763;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Byte>
struct Dictionary_2_t6760;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m38039_gshared (Enumerator_t6763 * __this, Dictionary_2_t6760 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m38039(__this, ___dictionary, method) (( void (*) (Enumerator_t6763 *, Dictionary_2_t6760 *, const MethodInfo*))Enumerator__ctor_m38039_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m38040_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m38040(__this, method) (( Object_t * (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m38040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m38041_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m38041(__this, method) (( void (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m38041_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2157  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38042_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38042(__this, method) (( DictionaryEntry_t2157  (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m38042_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38043_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38043(__this, method) (( Object_t * (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m38043_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38044_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38044(__this, method) (( Object_t * (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m38044_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m38045_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m38045(__this, method) (( bool (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_MoveNext_m38045_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t6757  Enumerator_get_Current_m38046_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m38046(__this, method) (( KeyValuePair_2_t6757  (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_get_Current_m38046_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentKey()
extern "C" int64_t Enumerator_get_CurrentKey_m38047_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m38047(__this, method) (( int64_t (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_get_CurrentKey_m38047_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m38048_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m38048(__this, method) (( uint8_t (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_get_CurrentValue_m38048_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Reset()
extern "C" void Enumerator_Reset_m38049_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_Reset_m38049(__this, method) (( void (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_Reset_m38049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m38050_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m38050(__this, method) (( void (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_VerifyState_m38050_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m38051_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m38051(__this, method) (( void (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_VerifyCurrent_m38051_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m38052_gshared (Enumerator_t6763 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m38052(__this, method) (( void (*) (Enumerator_t6763 *, const MethodInfo*))Enumerator_Dispose_m38052_gshared)(__this, method)
