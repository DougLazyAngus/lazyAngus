#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t721;
// System.Collections.ArrayList
struct ArrayList_t723;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.Provider.ProviderCollection
struct  ProviderCollection_t3306  : public Object_t
{
	// System.Collections.Hashtable System.Configuration.Provider.ProviderCollection::lookup
	Hashtable_t721 * ___lookup_0;
	// System.Boolean System.Configuration.Provider.ProviderCollection::readOnly
	bool ___readOnly_1;
	// System.Collections.ArrayList System.Configuration.Provider.ProviderCollection::values
	ArrayList_t723 * ___values_2;
};
