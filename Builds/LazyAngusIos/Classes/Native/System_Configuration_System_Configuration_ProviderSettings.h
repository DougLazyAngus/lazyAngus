#pragma once
#include <stdint.h>
// System.Configuration.ConfigNameValueCollection
struct ConfigNameValueCollection_t3298;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Configuration.ProviderSettings
struct  ProviderSettings_t3362  : public ConfigurationElement_t3314
{
	// System.Configuration.ConfigNameValueCollection System.Configuration.ProviderSettings::parameters
	ConfigNameValueCollection_t3298 * ___parameters_13;
};
struct ProviderSettings_t3362_StaticFields{
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::nameProp
	ConfigurationProperty_t3329 * ___nameProp_14;
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::typeProp
	ConfigurationProperty_t3329 * ___typeProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::properties
	ConfigurationPropertyCollection_t3310 * ___properties_16;
};
