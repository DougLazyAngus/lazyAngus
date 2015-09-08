#pragma once
#include <stdint.h>
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3366;
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfo.h"
// System.Configuration.SectionGroupInfo
struct  SectionGroupInfo_t3305  : public ConfigInfo_t3301
{
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::sections
	ConfigInfoCollection_t3366 * ___sections_6;
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::groups
	ConfigInfoCollection_t3366 * ___groups_7;
};
struct SectionGroupInfo_t3305_StaticFields{
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::emptyList
	ConfigInfoCollection_t3366 * ___emptyList_8;
};
