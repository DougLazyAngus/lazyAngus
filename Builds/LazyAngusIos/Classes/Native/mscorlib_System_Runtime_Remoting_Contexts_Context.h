#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t1554;
// System.Collections.Hashtable
struct Hashtable_t1569;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Contexts.Context
struct  Context_t2566  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t1554 * ___context_properties_1;
};
struct Context_t2566_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t1569 * ___namedSlots_2;
};
