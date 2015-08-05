#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct DictionaryNodeEnumerator_t3912;
// System.Object
struct Object_t;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t3911;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3125;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern "C" void DictionaryNodeEnumerator__ctor_m13093 (DictionaryNodeEnumerator_t3912 * __this, ListDictionary_t3125 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::FailFast()
extern "C" void DictionaryNodeEnumerator_FailFast_m13094 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::MoveNext()
extern "C" bool DictionaryNodeEnumerator_MoveNext_m13095 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::Reset()
extern "C" void DictionaryNodeEnumerator_Reset_m13096 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Current()
extern "C" Object_t * DictionaryNodeEnumerator_get_Current_m13097 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_DictionaryNode()
extern "C" DictionaryNode_t3911 * DictionaryNodeEnumerator_get_DictionaryNode_m13098 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Entry()
extern "C" DictionaryEntry_t2090  DictionaryNodeEnumerator_get_Entry_m13099 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Key()
extern "C" Object_t * DictionaryNodeEnumerator_get_Key_m13100 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Value()
extern "C" Object_t * DictionaryNodeEnumerator_get_Value_m13101 (DictionaryNodeEnumerator_t3912 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
