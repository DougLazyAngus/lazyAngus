#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Collections.ArrayList
struct ArrayList_t712;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.Provider.ProviderCollection
struct  ProviderCollection_t3295  : public Object_t
{
	// System.Collections.Hashtable System.Configuration.Provider.ProviderCollection::lookup
	Hashtable_t710 * ___lookup_0;
	// System.Boolean System.Configuration.Provider.ProviderCollection::readOnly
	bool ___readOnly_1;
	// System.Collections.ArrayList System.Configuration.Provider.ProviderCollection::values
	ArrayList_t712 * ___values_2;
};
