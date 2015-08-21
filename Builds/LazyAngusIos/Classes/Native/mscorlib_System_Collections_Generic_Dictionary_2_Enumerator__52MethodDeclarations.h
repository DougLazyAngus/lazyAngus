#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>
struct Enumerator_t7087;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7084;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_54.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m44915_gshared (Enumerator_t7087 * __this, Dictionary_2_t7084 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m44915(__this, ___dictionary, method) (( void (*) (Enumerator_t7087 *, Dictionary_2_t7084 *, const MethodInfo*))Enumerator__ctor_m44915_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m44917_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m44917(__this, method) (( Object_t * (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m44917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m44919_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m44919(__this, method) (( void (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m44919_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t2137  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44921_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44921(__this, method) (( DictionaryEntry_t2137  (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m44921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44923_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44923(__this, method) (( Object_t * (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m44923_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44925_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44925(__this, method) (( Object_t * (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m44925_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::MoveNext()
extern "C" bool Enumerator_MoveNext_m44927_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m44927(__this, method) (( bool (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_MoveNext_m44927_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_Current()
extern "C" KeyValuePair_2_t7010  Enumerator_get_Current_m44929_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m44929(__this, method) (( KeyValuePair_2_t7010  (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_get_Current_m44929_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m44931_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m44931(__this, method) (( Object_t * (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_get_CurrentKey_m44931_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::get_CurrentValue()
extern "C" double Enumerator_get_CurrentValue_m44933_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m44933(__this, method) (( double (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_get_CurrentValue_m44933_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Reset()
extern "C" void Enumerator_Reset_m44935_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_Reset_m44935(__this, method) (( void (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_Reset_m44935_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyState()
extern "C" void Enumerator_VerifyState_m44937_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m44937(__this, method) (( void (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_VerifyState_m44937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m44939_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m44939(__this, method) (( void (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_VerifyCurrent_m44939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Double>::Dispose()
extern "C" void Enumerator_Dispose_m44941_gshared (Enumerator_t7087 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m44941(__this, method) (( void (*) (Enumerator_t7087 *, const MethodInfo*))Enumerator_Dispose_m44941_gshared)(__this, method)
