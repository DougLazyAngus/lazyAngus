#pragma once
#include <stdint.h>
// System.Configuration.SectionInformation
struct SectionInformation_t3338;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3339;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3340  : public ConfigurationElement_t3318
{
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t3338 * ___sectionInformation_13;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	Object_t * ___section_handler_14;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_15;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	Object_t * ____configContext_16;
};
