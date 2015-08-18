#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/Enumerator
struct Enumerator_t4443;
// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t696;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable/Enumerator::.ctor(System.Collections.Hashtable,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Enumerator__ctor_m16944 (Enumerator_t4443 * __this, Hashtable_t696 * ___host, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m16945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::FailFast()
extern "C" void Enumerator_FailFast_m16946 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/Enumerator::Reset()
extern "C" void Enumerator_Reset_m16947 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m16948 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Hashtable/Enumerator::get_Entry()
extern "C" DictionaryEntry_t2139  Enumerator_get_Entry_m16949 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m16950 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m16951 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m16952 (Enumerator_t4443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
