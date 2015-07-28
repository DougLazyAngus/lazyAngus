#pragma once
#include <stdint.h>
// System.String
struct String_t;
// OneSignal/IdsAvailable
struct IdsAvailable_t376;
// OneSignal/TagsReceived
struct TagsReceived_t389;
// OneSignalPlatform
struct OneSignalPlatform_t390;
// OneSignal/NotificationReceived
struct NotificationReceived_t387;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OneSignal/LOG_LEVEL
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL.h"
// OneSignal
struct  OneSignal_t379  : public MonoBehaviour_t13
{
};
struct OneSignal_t379_StaticFields{
	// OneSignal/IdsAvailable OneSignal::idsAvailableDelegate
	IdsAvailable_t376 * ___idsAvailableDelegate_3;
	// OneSignal/TagsReceived OneSignal::tagsReceivedDelegate
	TagsReceived_t389 * ___tagsReceivedDelegate_4;
	// OneSignal/LOG_LEVEL OneSignal::logLevel
	int32_t ___logLevel_5;
	// OneSignal/LOG_LEVEL OneSignal::visualLogLevel
	int32_t ___visualLogLevel_6;
	// OneSignalPlatform OneSignal::oneSignalPlatform
	Object_t * ___oneSignalPlatform_7;
	// System.Boolean OneSignal::initialized
	bool ___initialized_8;
	// OneSignal/NotificationReceived OneSignal::notificationDelegate
	NotificationReceived_t387 * ___notificationDelegate_9;
};
