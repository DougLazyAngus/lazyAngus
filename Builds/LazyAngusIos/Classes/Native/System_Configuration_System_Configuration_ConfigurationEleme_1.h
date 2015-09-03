#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3314;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t3311;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
struct  ConfigurationRemoveElement_t3315  : public ConfigurationElement_t3314
{
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::properties
	ConfigurationPropertyCollection_t3310 * ___properties_13;
	// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::_origElement
	ConfigurationElement_t3314 * ____origElement_14;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::_origCollection
	ConfigurationElementCollection_t3311 * ____origCollection_15;
};
