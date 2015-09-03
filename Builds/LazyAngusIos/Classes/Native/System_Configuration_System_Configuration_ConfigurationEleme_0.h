#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Configuration.ElementMap
struct ElementMap_t3309;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3310;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t3311;
// System.Configuration.ElementInformation
struct ElementInformation_t3312;
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t3313;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3314  : public Object_t
{
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t3309 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t3310 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t3311 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t3312 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t3296 * ____configuration_7;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t3313 * ___lockAllAttributesExcept_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t3313 * ___lockAllElementsExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t3313 * ___lockAttributes_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t3313 * ___lockElements_11;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_12;
};
