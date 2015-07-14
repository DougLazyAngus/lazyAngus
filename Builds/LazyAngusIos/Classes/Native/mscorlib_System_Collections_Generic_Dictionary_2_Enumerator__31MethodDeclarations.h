#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3910;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3904;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25909_gshared (Enumerator_t3910 * __this, Dictionary_2_t3904 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25909(__this, ___dictionary, method) (( void (*) (Enumerator_t3910 *, Dictionary_2_t3904 *, const MethodInfo*))Enumerator__ctor_m25909_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25910_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25910(__this, method) (( Object_t * (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25910_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1708  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25911_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25911(__this, method) (( DictionaryEntry_t1708  (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25911_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25912_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25912(__this, method) (( Object_t * (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25912_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25913_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25913(__this, method) (( Object_t * (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25913_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25914_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25914(__this, method) (( bool (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_MoveNext_m25914_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3905  Enumerator_get_Current_m25915_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25915(__this, method) (( KeyValuePair_2_t3905  (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_get_Current_m25915_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m25916_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25916(__this, method) (( uint64_t (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_get_CurrentKey_m25916_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m25917_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25917(__this, method) (( Object_t * (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_get_CurrentValue_m25917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m25918_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25918(__this, method) (( void (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_VerifyState_m25918_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25919_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25919(__this, method) (( void (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_VerifyCurrent_m25919_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m25920_gshared (Enumerator_t3910 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25920(__this, method) (( void (*) (Enumerator_t3910 *, const MethodInfo*))Enumerator_Dispose_m25920_gshared)(__this, method)
