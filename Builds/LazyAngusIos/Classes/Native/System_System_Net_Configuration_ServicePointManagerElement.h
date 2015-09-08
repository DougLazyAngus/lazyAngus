#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3314;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3333;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Net.Configuration.ServicePointManagerElement
struct  ServicePointManagerElement_t4338  : public ConfigurationElement_t3318
{
};
struct ServicePointManagerElement_t4338_StaticFields{
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::properties
	ConfigurationPropertyCollection_t3314 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateNameProp
	ConfigurationProperty_t3333 * ___checkCertificateNameProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateRevocationListProp
	ConfigurationProperty_t3333 * ___checkCertificateRevocationListProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::dnsRefreshTimeoutProp
	ConfigurationProperty_t3333 * ___dnsRefreshTimeoutProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::enableDnsRoundRobinProp
	ConfigurationProperty_t3333 * ___enableDnsRoundRobinProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::expect100ContinueProp
	ConfigurationProperty_t3333 * ___expect100ContinueProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::useNagleAlgorithmProp
	ConfigurationProperty_t3333 * ___useNagleAlgorithmProp_19;
};
