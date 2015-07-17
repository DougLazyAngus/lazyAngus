#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
struct Dictionary_2_t109;
// System.Action
struct Action_t101;
// System.Action`1<System.String>
struct Action_1_t102;
// SA_Singleton`1<IOSAdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen.h"
// IOSAdMobController
struct  IOSAdMobController_t110  : public SA_Singleton_1_t111
{
	// System.Boolean IOSAdMobController::_IsInited
	bool ____IsInited_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner> IOSAdMobController::_banners
	Dictionary_2_t109 * ____banners_8;
	// System.String IOSAdMobController::_BannersUunitId
	String_t* ____BannersUunitId_9;
	// System.String IOSAdMobController::_InterstisialUnitId
	String_t* ____InterstisialUnitId_10;
	// System.Action IOSAdMobController::_OnInterstitialLoaded
	Action_t101 * ____OnInterstitialLoaded_11;
	// System.Action IOSAdMobController::_OnInterstitialFailedLoading
	Action_t101 * ____OnInterstitialFailedLoading_12;
	// System.Action IOSAdMobController::_OnInterstitialOpened
	Action_t101 * ____OnInterstitialOpened_13;
	// System.Action IOSAdMobController::_OnInterstitialClosed
	Action_t101 * ____OnInterstitialClosed_14;
	// System.Action IOSAdMobController::_OnInterstitialLeftApplication
	Action_t101 * ____OnInterstitialLeftApplication_15;
	// System.Action`1<System.String> IOSAdMobController::_OnAdInAppRequest
	Action_1_t102 * ____OnAdInAppRequest_16;
};
struct IOSAdMobController_t110_StaticFields{
	// System.Action IOSAdMobController::<>f__am$cacheA
	Action_t101 * ___U3CU3Ef__amU24cacheA_17;
	// System.Action IOSAdMobController::<>f__am$cacheB
	Action_t101 * ___U3CU3Ef__amU24cacheB_18;
	// System.Action IOSAdMobController::<>f__am$cacheC
	Action_t101 * ___U3CU3Ef__amU24cacheC_19;
	// System.Action IOSAdMobController::<>f__am$cacheD
	Action_t101 * ___U3CU3Ef__amU24cacheD_20;
	// System.Action IOSAdMobController::<>f__am$cacheE
	Action_t101 * ___U3CU3Ef__amU24cacheE_21;
	// System.Action`1<System.String> IOSAdMobController::<>f__am$cacheF
	Action_1_t102 * ___U3CU3Ef__amU24cacheF_22;
};
