#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3333;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3314;
// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t3364;
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSecti.h"
// System.Configuration.ProtectedConfigurationSection
struct  ProtectedConfigurationSection_t3365  : public ConfigurationSection_t3340
{
	// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::providers
	ProtectedConfigurationProviderCollection_t3364 * ___providers_20;
};
struct ProtectedConfigurationSection_t3365_StaticFields{
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::defaultProviderProp
	ConfigurationProperty_t3333 * ___defaultProviderProp_17;
	// System.Configuration.ConfigurationProperty System.Configuration.ProtectedConfigurationSection::providersProp
	ConfigurationProperty_t3333 * ___providersProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::properties
	ConfigurationPropertyCollection_t3314 * ___properties_19;
};
