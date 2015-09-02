#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t6250;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t6241;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m34045_gshared (ShimEnumerator_t6250 * __this, Dictionary_2_t6241 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m34045(__this, ___host, method) (( void (*) (ShimEnumerator_t6250 *, Dictionary_2_t6241 *, const MethodInfo*))ShimEnumerator__ctor_m34045_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m34046_gshared (ShimEnumerator_t6250 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m34046(__this, method) (( bool (*) (ShimEnumerator_t6250 *, const MethodInfo*))ShimEnumerator_MoveNext_m34046_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t2156  ShimEnumerator_get_Entry_m34047_gshared (ShimEnumerator_t6250 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m34047(__this, method) (( DictionaryEntry_t2156  (*) (ShimEnumerator_t6250 *, const MethodInfo*))ShimEnumerator_get_Entry_m34047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m34048_gshared (ShimEnumerator_t6250 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m34048(__this, method) (( Object_t * (*) (ShimEnumerator_t6250 *, const MethodInfo*))ShimEnumerator_get_Key_m34048_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m34049_gshared (ShimEnumerator_t6250 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m34049(__this, method) (( Object_t * (*) (ShimEnumerator_t6250 *, const MethodInfo*))ShimEnumerator_get_Value_m34049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m34050_gshared (ShimEnumerator_t6250 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m34050(__this, method) (( Object_t * (*) (ShimEnumerator_t6250 *, const MethodInfo*))ShimEnumerator_get_Current_m34050_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::Reset()
extern "C" void ShimEnumerator_Reset_m34051_gshared (ShimEnumerator_t6250 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m34051(__this, method) (( void (*) (ShimEnumerator_t6250 *, const MethodInfo*))ShimEnumerator_Reset_m34051_gshared)(__this, method)
