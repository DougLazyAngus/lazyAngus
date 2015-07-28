#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GAIHandler
struct GAIHandler_t7;
// System.Object
#include "mscorlib_System_Object.h"
// GoogleAnalyticsV4/DebugMode
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_DebugMode.h"
// GoogleAnalyticsiOSV3
struct  GoogleAnalyticsiOSV3_t12  : public Object_t
{
	// System.String GoogleAnalyticsiOSV3::trackingCode
	String_t* ___trackingCode_0;
	// System.String GoogleAnalyticsiOSV3::appName
	String_t* ___appName_1;
	// System.String GoogleAnalyticsiOSV3::bundleIdentifier
	String_t* ___bundleIdentifier_2;
	// System.String GoogleAnalyticsiOSV3::appVersion
	String_t* ___appVersion_3;
	// System.Int32 GoogleAnalyticsiOSV3::dispatchPeriod
	int32_t ___dispatchPeriod_4;
	// System.Int32 GoogleAnalyticsiOSV3::sampleFrequency
	int32_t ___sampleFrequency_5;
	// GoogleAnalyticsV4/DebugMode GoogleAnalyticsiOSV3::logLevel
	int32_t ___logLevel_6;
	// System.Boolean GoogleAnalyticsiOSV3::anonymizeIP
	bool ___anonymizeIP_7;
	// System.Boolean GoogleAnalyticsiOSV3::adIdCollection
	bool ___adIdCollection_8;
	// System.Boolean GoogleAnalyticsiOSV3::dryRun
	bool ___dryRun_9;
	// GAIHandler GoogleAnalyticsiOSV3::handler
	GAIHandler_t7 * ___handler_10;
};
