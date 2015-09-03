#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3337;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3340;
// System.Configuration.Configuration
struct Configuration_t3296;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3304;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t3302  : public Object_t
{
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t3337 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t3340 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t3296 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t3304 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;
};
