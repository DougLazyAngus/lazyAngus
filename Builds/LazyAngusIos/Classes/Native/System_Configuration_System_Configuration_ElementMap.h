#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t710;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t3308;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ElementMap
struct  ElementMap_t3309  : public Object_t
{
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::properties
	ConfigurationPropertyCollection_t3310 * ___properties_1;
	// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ElementMap::collectionAttribute
	ConfigurationCollectionAttribute_t3308 * ___collectionAttribute_2;
};
struct ElementMap_t3309_StaticFields{
	// System.Collections.Hashtable System.Configuration.ElementMap::elementMaps
	Hashtable_t710 * ___elementMaps_0;
};
