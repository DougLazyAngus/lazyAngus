#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3314;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3333;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t4319  : public ConfigurationElement_t3318
{
};
struct ConnectionManagementElement_t4319_StaticFields{
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t3314 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t3333 * ___addressProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t3333 * ___maxConnectionProp_15;
};
