#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner>
struct Dictionary_2_t114;
// System.Action
struct Action_t101;
// System.Action`1<System.String>
struct Action_1_t102;
// SA_Singleton`1<WP8AdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_0.h"
// WP8AdMobController
struct  WP8AdMobController_t115  : public SA_Singleton_1_t116
{
	// System.Boolean WP8AdMobController::_IsInited
	bool ____IsInited_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,WP8ADBanner> WP8AdMobController::_banners
	Dictionary_2_t114 * ____banners_8;
	// System.String WP8AdMobController::_BannersUunitId
	String_t* ____BannersUunitId_9;
	// System.String WP8AdMobController::_InterstisialUnitId
	String_t* ____InterstisialUnitId_10;
	// System.Action WP8AdMobController::_OnInterstitialLoaded
	Action_t101 * ____OnInterstitialLoaded_11;
	// System.Action WP8AdMobController::_OnInterstitialFailedLoading
	Action_t101 * ____OnInterstitialFailedLoading_12;
	// System.Action WP8AdMobController::_OnInterstitialOpened
	Action_t101 * ____OnInterstitialOpened_13;
	// System.Action WP8AdMobController::_OnInterstitialClosed
	Action_t101 * ____OnInterstitialClosed_14;
	// System.Action WP8AdMobController::_OnInterstitialLeftApplication
	Action_t101 * ____OnInterstitialLeftApplication_15;
	// System.Action`1<System.String> WP8AdMobController::_OnAdInAppRequest
	Action_1_t102 * ____OnAdInAppRequest_16;
};
struct WP8AdMobController_t115_StaticFields{
	// System.Action WP8AdMobController::<>f__am$cacheA
	Action_t101 * ___U3CU3Ef__amU24cacheA_17;
	// System.Action WP8AdMobController::<>f__am$cacheB
	Action_t101 * ___U3CU3Ef__amU24cacheB_18;
	// System.Action WP8AdMobController::<>f__am$cacheC
	Action_t101 * ___U3CU3Ef__amU24cacheC_19;
	// System.Action WP8AdMobController::<>f__am$cacheD
	Action_t101 * ___U3CU3Ef__amU24cacheD_20;
	// System.Action WP8AdMobController::<>f__am$cacheE
	Action_t101 * ___U3CU3Ef__amU24cacheE_21;
	// System.Action`1<System.String> WP8AdMobController::<>f__am$cacheF
	Action_1_t102 * ___U3CU3Ef__amU24cacheF_22;
};
