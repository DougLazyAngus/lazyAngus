#pragma once
#include <stdint.h>
// GoogleAdController
struct GoogleAdController_t621;
// PhaseDelayedEventScheduler
struct PhaseDelayedEventScheduler_t560;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// GamePhaseState[]
struct GamePhaseStateU5BU5D_t622;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GoogleAdController
struct  GoogleAdController_t621  : public MonoBehaviour_t13
{
	// System.Int32 GoogleAdController::instancesBetweenInterstitialAds
	int32_t ___instancesBetweenInterstitialAds_3;
	// PhaseDelayedEventScheduler GoogleAdController::phaseDelayedEventScheduler
	PhaseDelayedEventScheduler_t560 * ___phaseDelayedEventScheduler_4;
	// System.Boolean GoogleAdController::registeredForEvents
	bool ___registeredForEvents_5;
	// System.Boolean GoogleAdController::interstitialAdLoaded
	bool ___interstitialAdLoaded_6;
	// System.Boolean GoogleAdController::adsEnabled
	bool ___adsEnabled_7;
	// GoogleMobileAdBanner GoogleAdController::banner
	Object_t * ___banner_8;
	// GamePhaseState[] GoogleAdController::acceptableGamePhases
	GamePhaseStateU5BU5D_t622* ___acceptableGamePhases_9;
};
struct GoogleAdController_t621_StaticFields{
	// GoogleAdController GoogleAdController::instance
	GoogleAdController_t621 * ___instance_2;
};
