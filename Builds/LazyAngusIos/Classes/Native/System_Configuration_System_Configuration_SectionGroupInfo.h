#pragma once
#include <stdint.h>
// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3365;
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfo.h"
// System.Configuration.SectionGroupInfo
struct  SectionGroupInfo_t3304  : public ConfigInfo_t3300
{
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::sections
	ConfigInfoCollection_t3365 * ___sections_6;
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::groups
	ConfigInfoCollection_t3365 * ___groups_7;
};
struct SectionGroupInfo_t3304_StaticFields{
	// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::emptyList
	ConfigInfoCollection_t3365 * ___emptyList_8;
};
