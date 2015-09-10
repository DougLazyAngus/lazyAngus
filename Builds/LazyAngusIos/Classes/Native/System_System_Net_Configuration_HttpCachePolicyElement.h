#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3340;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3321;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Net.Configuration.HttpCachePolicyElement
struct  HttpCachePolicyElement_t4332  : public ConfigurationElement_t3325
{
};
struct HttpCachePolicyElement_t4332_StaticFields{
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::maximumAgeProp
	ConfigurationProperty_t3340 * ___maximumAgeProp_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::maximumStaleProp
	ConfigurationProperty_t3340 * ___maximumStaleProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::minimumFreshProp
	ConfigurationProperty_t3340 * ___minimumFreshProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpCachePolicyElement::policyLevelProp
	ConfigurationProperty_t3340 * ___policyLevelProp_16;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpCachePolicyElement::properties
	ConfigurationPropertyCollection_t3321 * ___properties_17;
};
