#pragma once
#include <stdint.h>
// GoogleAdController
struct GoogleAdController_t515;
// System.Collections.IEnumerator
struct IEnumerator_t48;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GoogleAdController
struct  GoogleAdController_t515  : public MonoBehaviour_t13
{
	// System.Int32 GoogleAdController::instancesBetweenInterstitialAds
	int32_t ___instancesBetweenInterstitialAds_3;
	// System.Single GoogleAdController::waitBeforeAd
	float ___waitBeforeAd_4;
	// System.Collections.IEnumerator GoogleAdController::pendingInterstitialAd
	Object_t * ___pendingInterstitialAd_5;
	// System.Boolean GoogleAdController::registeredForEvents
	bool ___registeredForEvents_6;
	// System.Boolean GoogleAdController::interstitialAdLoaded
	bool ___interstitialAdLoaded_7;
	// System.Boolean GoogleAdController::adsEnabled
	bool ___adsEnabled_8;
	// GoogleMobileAdBanner GoogleAdController::banner
	Object_t * ___banner_9;
};
struct GoogleAdController_t515_StaticFields{
	// GoogleAdController GoogleAdController::instance
	GoogleAdController_t515 * ___instance_2;
};
