#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>
struct Enumerator_t9268;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Reflection.Emit.Label>
struct Dictionary_2_t4477;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m69206_gshared (Enumerator_t9268 * __this, Dictionary_2_t4477 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m69206(__this, ___host, method) (( void (*) (Enumerator_t9268 *, Dictionary_2_t4477 *, const MethodInfo*))Enumerator__ctor_m69206_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m69207_gshared (Enumerator_t9268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m69207(__this, method) (( Object_t * (*) (Enumerator_t9268 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m69207_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m69208_gshared (Enumerator_t9268 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m69208(__this, method) (( void (*) (Enumerator_t9268 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m69208_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::Dispose()
extern "C" void Enumerator_Dispose_m69209_gshared (Enumerator_t9268 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m69209(__this, method) (( void (*) (Enumerator_t9268 *, const MethodInfo*))Enumerator_Dispose_m69209_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::MoveNext()
extern "C" bool Enumerator_MoveNext_m69210_gshared (Enumerator_t9268 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m69210(__this, method) (( bool (*) (Enumerator_t9268 *, const MethodInfo*))Enumerator_MoveNext_m69210_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Reflection.Emit.Label>::get_Current()
extern "C" Label_t4474  Enumerator_get_Current_m69211_gshared (Enumerator_t9268 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m69211(__this, method) (( Label_t4474  (*) (Enumerator_t9268 *, const MethodInfo*))Enumerator_get_Current_m69211_gshared)(__this, method)
