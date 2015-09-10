#pragma once
#include <stdint.h>
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3376;
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfo.h"
// System.Configuration.SectionGroupInfo
struct  SectionGroupInfo_t3315  : public ConfigInfo_t3311
{
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::sections
	ConfigInfoCollection_t3376 * ___sections_6;
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::groups
	ConfigInfoCollection_t3376 * ___groups_7;
};
struct SectionGroupInfo_t3315_StaticFields{
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::emptyList
	ConfigInfoCollection_t3376 * ___emptyList_8;
};
