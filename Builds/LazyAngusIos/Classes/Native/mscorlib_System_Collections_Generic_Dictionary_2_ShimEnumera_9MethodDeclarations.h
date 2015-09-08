#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>
struct ShimEnumerator_t8926;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Int32>
struct Dictionary_2_t8917;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m64525_gshared (ShimEnumerator_t8926 * __this, Dictionary_2_t8917 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m64525(__this, ___host, method) (( void (*) (ShimEnumerator_t8926 *, Dictionary_2_t8917 *, const MethodInfo*))ShimEnumerator__ctor_m64525_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m64526_gshared (ShimEnumerator_t8926 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m64526(__this, method) (( bool (*) (ShimEnumerator_t8926 *, const MethodInfo*))ShimEnumerator_MoveNext_m64526_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2160  ShimEnumerator_get_Entry_m64527_gshared (ShimEnumerator_t8926 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m64527(__this, method) (( DictionaryEntry_t2160  (*) (ShimEnumerator_t8926 *, const MethodInfo*))ShimEnumerator_get_Entry_m64527_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m64528_gshared (ShimEnumerator_t8926 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m64528(__this, method) (( Object_t * (*) (ShimEnumerator_t8926 *, const MethodInfo*))ShimEnumerator_get_Key_m64528_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m64529_gshared (ShimEnumerator_t8926 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m64529(__this, method) (( Object_t * (*) (ShimEnumerator_t8926 *, const MethodInfo*))ShimEnumerator_get_Value_m64529_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m64530_gshared (ShimEnumerator_t8926 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m64530(__this, method) (( Object_t * (*) (ShimEnumerator_t8926 *, const MethodInfo*))ShimEnumerator_get_Current_m64530_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int64,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m64531_gshared (ShimEnumerator_t8926 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m64531(__this, method) (( void (*) (ShimEnumerator_t8926 *, const MethodInfo*))ShimEnumerator_Reset_m64531_gshared)(__this, method)
