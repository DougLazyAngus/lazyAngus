#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t9033;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t9030;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m65963_gshared (Enumerator_t9033 * __this, Dictionary_2_t9030 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m65963(__this, ___dictionary, method) (( void (*) (Enumerator_t9033 *, Dictionary_2_t9030 *, const MethodInfo*))Enumerator__ctor_m65963_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m65964_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m65964(__this, method) (( Object_t * (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m65964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m65965_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m65965(__this, method) (( void (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m65965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2167  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65966_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65966(__this, method) (( DictionaryEntry_t2167  (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m65966_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65967_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65967(__this, method) (( Object_t * (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m65967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65968_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65968(__this, method) (( Object_t * (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m65968_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m65969_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m65969(__this, method) (( bool (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_MoveNext_m65969_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t7827  Enumerator_get_Current_m65970_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m65970(__this, method) (( KeyValuePair_2_t7827  (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_get_Current_m65970_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m65971_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m65971(__this, method) (( Object_t * (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_get_CurrentKey_m65971_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m65972_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m65972(__this, method) (( int64_t (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_get_CurrentValue_m65972_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Reset()
extern "C" void Enumerator_Reset_m65973_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_Reset_m65973(__this, method) (( void (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_Reset_m65973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m65974_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m65974(__this, method) (( void (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_VerifyState_m65974_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m65975_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m65975(__this, method) (( void (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_VerifyCurrent_m65975_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m65976_gshared (Enumerator_t9033 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m65976(__this, method) (( void (*) (Enumerator_t9033 *, const MethodInfo*))Enumerator_Dispose_m65976_gshared)(__this, method)
