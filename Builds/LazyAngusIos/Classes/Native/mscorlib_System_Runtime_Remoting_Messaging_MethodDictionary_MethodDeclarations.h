#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct DictionaryEnumerator_t4615;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t4609;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern "C" void DictionaryEnumerator__ctor_m18289 (DictionaryEnumerator_t4615 * __this, MethodDictionary_t4609 * ___methodDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m18290 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern "C" bool DictionaryEnumerator_MoveNext_m18291 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::Reset()
extern "C" void DictionaryEnumerator_Reset_m18292 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t2139  DictionaryEnumerator_get_Entry_m18293 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m18294 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m18295 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
