#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t9073;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1508;
// System.Object
#include "mscorlib_System_Object.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct  ThreadSafeDictionary_2_t9075  : public Object_t
{
	// System.Object SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::_lock
	Object_t * ____lock_0;
	// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::_valueFactory
	ThreadSafeDictionaryValueFactory_2_t9073 * ____valueFactory_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::_dictionary
	Dictionary_2_t1508 * ____dictionary_2;
};
