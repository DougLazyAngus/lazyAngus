﻿#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3329;
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSecti.h"
// System.Net.Configuration.RequestCachingSection
struct  RequestCachingSection_t4333  : public ConfigurationSection_t3336
{
};
struct RequestCachingSection_t4333_StaticFields{
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.RequestCachingSection::properties
	ConfigurationPropertyCollection_t3310 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.RequestCachingSection::defaultFtpCachePolicyProp
	ConfigurationProperty_t3329 * ___defaultFtpCachePolicyProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.RequestCachingSection::defaultHttpCachePolicyProp
	ConfigurationProperty_t3329 * ___defaultHttpCachePolicyProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.RequestCachingSection::defaultPolicyLevelProp
	ConfigurationProperty_t3329 * ___defaultPolicyLevelProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.RequestCachingSection::disableAllCachingProp
	ConfigurationProperty_t3329 * ___disableAllCachingProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.RequestCachingSection::isPrivateCacheProp
	ConfigurationProperty_t3329 * ___isPrivateCacheProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.RequestCachingSection::unspecifiedMaximumAgeProp
	ConfigurationProperty_t3329 * ___unspecifiedMaximumAgeProp_23;
};