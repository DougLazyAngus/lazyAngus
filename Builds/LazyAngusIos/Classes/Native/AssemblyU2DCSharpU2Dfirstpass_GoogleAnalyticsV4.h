#pragma once
#include <stdint.h>
// System.String
struct String_t;
// GoogleAnalyticsV4
struct GoogleAnalyticsV4_t11;
// GoogleAnalyticsiOSV3
struct GoogleAnalyticsiOSV3_t12;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GoogleAnalyticsV4/DebugMode
#include "AssemblyU2DCSharpU2Dfirstpass_GoogleAnalyticsV4_DebugMode.h"
// GoogleAnalyticsV4
struct  GoogleAnalyticsV4_t11  : public MonoBehaviour_t13
{
	// System.String GoogleAnalyticsV4::uncaughtExceptionStackTrace
	String_t* ___uncaughtExceptionStackTrace_2;
	// System.Boolean GoogleAnalyticsV4::initialized
	bool ___initialized_3;
	// System.String GoogleAnalyticsV4::androidTrackingCode
	String_t* ___androidTrackingCode_4;
	// System.String GoogleAnalyticsV4::IOSTrackingCode
	String_t* ___IOSTrackingCode_5;
	// System.String GoogleAnalyticsV4::otherTrackingCode
	String_t* ___otherTrackingCode_6;
	// System.String GoogleAnalyticsV4::productName
	String_t* ___productName_7;
	// System.String GoogleAnalyticsV4::bundleIdentifier
	String_t* ___bundleIdentifier_8;
	// System.String GoogleAnalyticsV4::bundleVersion
	String_t* ___bundleVersion_9;
	// System.Int32 GoogleAnalyticsV4::dispatchPeriod
	int32_t ___dispatchPeriod_10;
	// System.Int32 GoogleAnalyticsV4::sampleFrequency
	int32_t ___sampleFrequency_11;
	// GoogleAnalyticsV4/DebugMode GoogleAnalyticsV4::logLevel
	int32_t ___logLevel_12;
	// System.Boolean GoogleAnalyticsV4::anonymizeIP
	bool ___anonymizeIP_13;
	// System.Boolean GoogleAnalyticsV4::UncaughtExceptionReporting
	bool ___UncaughtExceptionReporting_14;
	// System.Boolean GoogleAnalyticsV4::sendLaunchEvent
	bool ___sendLaunchEvent_15;
	// System.Boolean GoogleAnalyticsV4::dryRun
	bool ___dryRun_16;
	// System.Int32 GoogleAnalyticsV4::sessionTimeout
	int32_t ___sessionTimeout_17;
	// System.Boolean GoogleAnalyticsV4::enableAdId
	bool ___enableAdId_18;
	// GoogleAnalyticsiOSV3 GoogleAnalyticsV4::iosTracker
	GoogleAnalyticsiOSV3_t12 * ___iosTracker_31;
};
struct GoogleAnalyticsV4_t11_StaticFields{
	// GoogleAnalyticsV4 GoogleAnalyticsV4::instance
	GoogleAnalyticsV4_t11 * ___instance_19;
	// System.String GoogleAnalyticsV4::currencySymbol
	String_t* ___currencySymbol_20;
	// System.String GoogleAnalyticsV4::EVENT_HIT
	String_t* ___EVENT_HIT_21;
	// System.String GoogleAnalyticsV4::APP_VIEW
	String_t* ___APP_VIEW_22;
	// System.String GoogleAnalyticsV4::SET
	String_t* ___SET_23;
	// System.String GoogleAnalyticsV4::SET_ALL
	String_t* ___SET_ALL_24;
	// System.String GoogleAnalyticsV4::SEND
	String_t* ___SEND_25;
	// System.String GoogleAnalyticsV4::ITEM_HIT
	String_t* ___ITEM_HIT_26;
	// System.String GoogleAnalyticsV4::TRANSACTION_HIT
	String_t* ___TRANSACTION_HIT_27;
	// System.String GoogleAnalyticsV4::SOCIAL_HIT
	String_t* ___SOCIAL_HIT_28;
	// System.String GoogleAnalyticsV4::TIMING_HIT
	String_t* ___TIMING_HIT_29;
	// System.String GoogleAnalyticsV4::EXCEPTION_HIT
	String_t* ___EXCEPTION_HIT_30;
};
