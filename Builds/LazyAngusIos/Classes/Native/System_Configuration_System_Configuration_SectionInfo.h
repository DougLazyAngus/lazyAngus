﻿#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t223;
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfo.h"
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"
// System.Configuration.SectionInfo
struct  SectionInfo_t3364  : public ConfigInfo_t3300
{
	// System.Boolean System.Configuration.SectionInfo::allowLocation
	bool ___allowLocation_6;
	// System.Boolean System.Configuration.SectionInfo::requirePermission
	bool ___requirePermission_7;
	// System.Boolean System.Configuration.SectionInfo::restartOnExternalChanges
	bool ___restartOnExternalChanges_8;
	// System.Configuration.ConfigurationAllowDefinition System.Configuration.SectionInfo::allowDefinition
	int32_t ___allowDefinition_9;
	// System.Configuration.ConfigurationAllowExeDefinition System.Configuration.SectionInfo::allowExeDefinition
	int32_t ___allowExeDefinition_10;
};
struct SectionInfo_t3364_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Configuration.SectionInfo::<>f__switch$map1
	Dictionary_2_t223 * ___U3CU3Ef__switchU24map1_11;
};