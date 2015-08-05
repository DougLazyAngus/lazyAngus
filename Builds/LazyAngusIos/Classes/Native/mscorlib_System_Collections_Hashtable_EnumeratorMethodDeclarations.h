#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/Enumerator
struct Enumerator_t4398;
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t1277;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable/Enumerator::.ctor(System.Collections.Hashtable,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Enumerator__ctor_m16690 (Enumerator_t4398 * __this, Hashtable_t1277 * ___host, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m16691 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::FailFast()
extern "C" void Enumerator_FailFast_m16692 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::Reset()
extern "C" void Enumerator_Reset_m16693 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m16694 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Hashtable/Enumerator::get_Entry()
extern "C" DictionaryEntry_t2089  Enumerator_get_Entry_m16695 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m16696 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m16697 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m16698 (Enumerator_t4398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
