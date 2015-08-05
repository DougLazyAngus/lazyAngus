#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6144;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6135;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32920_gshared (ShimEnumerator_t6144 * __this, Dictionary_2_t6135 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m32920(__this, ___host, method) (( void (*) (ShimEnumerator_t6144 *, Dictionary_2_t6135 *, const MethodInfo*))ShimEnumerator__ctor_m32920_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32921_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m32921(__this, method) (( bool (*) (ShimEnumerator_t6144 *, const MethodInfo*))ShimEnumerator_MoveNext_m32921_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2090  ShimEnumerator_get_Entry_m32922_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m32922(__this, method) (( DictionaryEntry_t2090  (*) (ShimEnumerator_t6144 *, const MethodInfo*))ShimEnumerator_get_Entry_m32922_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32923_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m32923(__this, method) (( Object_t * (*) (ShimEnumerator_t6144 *, const MethodInfo*))ShimEnumerator_get_Key_m32923_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32924_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m32924(__this, method) (( Object_t * (*) (ShimEnumerator_t6144 *, const MethodInfo*))ShimEnumerator_get_Value_m32924_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32925_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m32925(__this, method) (( Object_t * (*) (ShimEnumerator_t6144 *, const MethodInfo*))ShimEnumerator_get_Current_m32925_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m32926_gshared (ShimEnumerator_t6144 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m32926(__this, method) (( void (*) (ShimEnumerator_t6144 *, const MethodInfo*))ShimEnumerator_Reset_m32926_gshared)(__this, method)
