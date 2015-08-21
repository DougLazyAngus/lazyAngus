#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6218;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6209;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m33680_gshared (ShimEnumerator_t6218 * __this, Dictionary_2_t6209 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m33680(__this, ___host, method) (( void (*) (ShimEnumerator_t6218 *, Dictionary_2_t6209 *, const MethodInfo*))ShimEnumerator__ctor_m33680_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m33681_gshared (ShimEnumerator_t6218 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m33681(__this, method) (( bool (*) (ShimEnumerator_t6218 *, const MethodInfo*))ShimEnumerator_MoveNext_m33681_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m33682_gshared (ShimEnumerator_t6218 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m33682(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t6218 *, const MethodInfo*))ShimEnumerator_get_Entry_m33682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m33683_gshared (ShimEnumerator_t6218 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m33683(__this, method) (( Object_t * (*) (ShimEnumerator_t6218 *, const MethodInfo*))ShimEnumerator_get_Key_m33683_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m33684_gshared (ShimEnumerator_t6218 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m33684(__this, method) (( Object_t * (*) (ShimEnumerator_t6218 *, const MethodInfo*))ShimEnumerator_get_Value_m33684_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m33685_gshared (ShimEnumerator_t6218 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m33685(__this, method) (( Object_t * (*) (ShimEnumerator_t6218 *, const MethodInfo*))ShimEnumerator_get_Current_m33685_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m33686_gshared (ShimEnumerator_t6218 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m33686(__this, method) (( void (*) (ShimEnumerator_t6218 *, const MethodInfo*))ShimEnumerator_Reset_m33686_gshared)(__this, method)
