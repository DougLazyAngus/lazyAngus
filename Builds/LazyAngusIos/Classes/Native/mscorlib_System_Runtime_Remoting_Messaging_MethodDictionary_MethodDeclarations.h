#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t5165;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t5159;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern "C" void DictionaryEnumerator__ctor_m22809 (DictionaryEnumerator_t5165 * __this, MethodDictionary_t5159 * ___methodDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m22810 (DictionaryEnumerator_t5165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern "C" bool DictionaryEnumerator_MoveNext_m22811 (DictionaryEnumerator_t5165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::Reset()
extern "C" void DictionaryEnumerator_Reset_m22812 (DictionaryEnumerator_t5165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t2156  DictionaryEnumerator_get_Entry_m22813 (DictionaryEnumerator_t5165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m22814 (DictionaryEnumerator_t5165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m22815 (DictionaryEnumerator_t5165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
