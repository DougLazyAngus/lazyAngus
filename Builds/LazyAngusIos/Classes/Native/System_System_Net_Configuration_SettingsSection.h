#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSecti.h"
// System.Net.Configuration.SettingsSection
struct  SettingsSection_t4335  : public ConfigurationSection_t3336
{
};
struct SettingsSection_t4335_StaticFields{
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t3310 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t3329 * ___httpWebRequestProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t3329 * ___ipv6Prop_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t3329 * ___performanceCountersProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t3329 * ___servicePointManagerProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t3329 * ___webProxyScriptProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t3329 * ___socketProp_23;
};
