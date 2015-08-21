#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>
struct ShimEnumerator_t7093;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Double>
struct Dictionary_2_t7084;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m45071_gshared (ShimEnumerator_t7093 * __this, Dictionary_2_t7084 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m45071(__this, ___host, method) (( void (*) (ShimEnumerator_t7093 *, Dictionary_2_t7084 *, const MethodInfo*))ShimEnumerator__ctor_m45071_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m45072_gshared (ShimEnumerator_t7093 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m45072(__this, method) (( bool (*) (ShimEnumerator_t7093 *, const MethodInfo*))ShimEnumerator_MoveNext_m45072_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Entry()
extern "C" DictionaryEntry_t2137  ShimEnumerator_get_Entry_m45073_gshared (ShimEnumerator_t7093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m45073(__this, method) (( DictionaryEntry_t2137  (*) (ShimEnumerator_t7093 *, const MethodInfo*))ShimEnumerator_get_Entry_m45073_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m45074_gshared (ShimEnumerator_t7093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m45074(__this, method) (( Object_t * (*) (ShimEnumerator_t7093 *, const MethodInfo*))ShimEnumerator_get_Key_m45074_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m45075_gshared (ShimEnumerator_t7093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m45075(__this, method) (( Object_t * (*) (ShimEnumerator_t7093 *, const MethodInfo*))ShimEnumerator_get_Value_m45075_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m45076_gshared (ShimEnumerator_t7093 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m45076(__this, method) (( Object_t * (*) (ShimEnumerator_t7093 *, const MethodInfo*))ShimEnumerator_get_Current_m45076_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Double>::Reset()
extern "C" void ShimEnumerator_Reset_m45077_gshared (ShimEnumerator_t7093 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m45077(__this, method) (( void (*) (ShimEnumerator_t7093 *, const MethodInfo*))ShimEnumerator_Reset_m45077_gshared)(__this, method)
