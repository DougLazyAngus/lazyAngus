#pragma once
#include <stdint.h>
// System.String
struct String_t;
// OneSignal/IdsAvailable
struct IdsAvailable_t334;
// OneSignal/TagsReceived
struct TagsReceived_t347;
// OneSignalPlatform
struct OneSignalPlatform_t348;
// OneSignal/NotificationReceived
struct NotificationReceived_t345;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// OneSignal/LOG_LEVEL
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL.h"
// OneSignal
struct  OneSignal_t337  : public MonoBehaviour_t67
{
};
struct OneSignal_t337_StaticFields{
	// OneSignal/IdsAvailable OneSignal::idsAvailableDelegate
	IdsAvailable_t334 * ___idsAvailableDelegate_3;
	// OneSignal/TagsReceived OneSignal::tagsReceivedDelegate
	TagsReceived_t347 * ___tagsReceivedDelegate_4;
	// OneSignal/LOG_LEVEL OneSignal::logLevel
	int32_t ___logLevel_5;
	// OneSignal/LOG_LEVEL OneSignal::visualLogLevel
	int32_t ___visualLogLevel_6;
	// OneSignalPlatform OneSignal::oneSignalPlatform
	Object_t * ___oneSignalPlatform_7;
	// System.Boolean OneSignal::initialized
	bool ___initialized_8;
	// OneSignal/NotificationReceived OneSignal::notificationDelegate
	NotificationReceived_t345 * ___notificationDelegate_9;
};
