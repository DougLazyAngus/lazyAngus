#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// GameAnalyticsSDK.Settings/MessageTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_MessageTypes.h"
// GameAnalyticsSDK.Settings/HelpTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_HelpTypes.h"
// GameAnalyticsSDK.Settings/HelpInfo
struct  HelpInfo_t482 
{
	// System.String GameAnalyticsSDK.Settings/HelpInfo::Message
	String_t* ___Message_0;
	// GameAnalyticsSDK.Settings/MessageTypes GameAnalyticsSDK.Settings/HelpInfo::MsgType
	int32_t ___MsgType_1;
	// GameAnalyticsSDK.Settings/HelpTypes GameAnalyticsSDK.Settings/HelpInfo::HelpType
	int32_t ___HelpType_2;
};
// Native definition for marshalling of: GameAnalyticsSDK.Settings/HelpInfo
struct HelpInfo_t482_marshaled
{
	char* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};
