#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t713;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3315;
// System.Collections.Hashtable
struct Hashtable_t711;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockT.h"
// System.Configuration.ConfigurationLockCollection
struct  ConfigurationLockCollection_t3314  : public Object_t
{
	// System.Collections.ArrayList System.Configuration.ConfigurationLockCollection::names
	ArrayList_t713 * ___names_0;
	// System.Configuration.ConfigurationElement System.Configuration.ConfigurationLockCollection::element
	ConfigurationElement_t3315 * ___element_1;
	// System.Configuration.ConfigurationLockType System.Configuration.ConfigurationLockCollection::lockType
	int32_t ___lockType_2;
	// System.Boolean System.Configuration.ConfigurationLockCollection::is_modified
	bool ___is_modified_3;
	// System.Collections.Hashtable System.Configuration.ConfigurationLockCollection::valid_name_hash
	Hashtable_t711 * ___valid_name_hash_4;
	// System.String System.Configuration.ConfigurationLockCollection::valid_names
	String_t* ___valid_names_5;
};
