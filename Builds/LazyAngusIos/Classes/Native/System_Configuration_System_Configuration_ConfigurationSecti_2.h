#pragma once
#include <stdint.h>
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t3348;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t3351;
// System.Configuration.Configuration
struct Configuration_t3307;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t3315;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t3313  : public Object_t
{
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t3348 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t3351 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t3307 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t3315 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;
};
