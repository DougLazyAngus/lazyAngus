#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t8657;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t4122;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m64009_gshared (ShimEnumerator_t8657 * __this, Dictionary_2_t4122 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m64009(__this, ___host, method) (( void (*) (ShimEnumerator_t8657 *, Dictionary_2_t4122 *, const MethodInfo*))ShimEnumerator__ctor_m64009_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m64010_gshared (ShimEnumerator_t8657 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m64010(__this, method) (( bool (*) (ShimEnumerator_t8657 *, const MethodInfo*))ShimEnumerator_MoveNext_m64010_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m64011_gshared (ShimEnumerator_t8657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m64011(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t8657 *, const MethodInfo*))ShimEnumerator_get_Entry_m64011_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m64012_gshared (ShimEnumerator_t8657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m64012(__this, method) (( Object_t * (*) (ShimEnumerator_t8657 *, const MethodInfo*))ShimEnumerator_get_Key_m64012_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m64013_gshared (ShimEnumerator_t8657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m64013(__this, method) (( Object_t * (*) (ShimEnumerator_t8657 *, const MethodInfo*))ShimEnumerator_get_Value_m64013_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m64014_gshared (ShimEnumerator_t8657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m64014(__this, method) (( Object_t * (*) (ShimEnumerator_t8657 *, const MethodInfo*))ShimEnumerator_get_Current_m64014_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m64015_gshared (ShimEnumerator_t8657 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m64015(__this, method) (( void (*) (ShimEnumerator_t8657 *, const MethodInfo*))ShimEnumerator_Reset_m64015_gshared)(__this, method)
