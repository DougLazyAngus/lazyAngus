#pragma once
#include <stdint.h>
// System.String
struct String_t;
// OneSignal/IdsAvailable
struct IdsAvailable_t336;
// OneSignal/TagsReceived
struct TagsReceived_t349;
// OneSignalPlatform
struct OneSignalPlatform_t350;
// OneSignal/NotificationReceived
struct NotificationReceived_t347;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OneSignal/LOG_LEVEL
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL.h"
// OneSignal
struct  OneSignal_t339  : public MonoBehaviour_t66
{
};
struct OneSignal_t339_StaticFields{
	// OneSignal/IdsAvailable OneSignal::idsAvailableDelegate
	IdsAvailable_t336 * ___idsAvailableDelegate_3;
	// OneSignal/TagsReceived OneSignal::tagsReceivedDelegate
	TagsReceived_t349 * ___tagsReceivedDelegate_4;
	// OneSignal/LOG_LEVEL OneSignal::logLevel
	int32_t ___logLevel_5;
	// OneSignal/LOG_LEVEL OneSignal::visualLogLevel
	int32_t ___visualLogLevel_6;
	// OneSignalPlatform OneSignal::oneSignalPlatform
	Object_t * ___oneSignalPlatform_7;
	// System.Boolean OneSignal::initialized
	bool ___initialized_8;
	// OneSignal/NotificationReceived OneSignal::notificationDelegate
	NotificationReceived_t347 * ___notificationDelegate_9;
};
