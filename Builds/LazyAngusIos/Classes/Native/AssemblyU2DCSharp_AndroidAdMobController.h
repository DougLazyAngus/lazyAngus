#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner>
struct Dictionary_2_t117;
// System.Action
struct Action_t101;
// System.Action`1<System.String>
struct Action_1_t102;
// SA_Singleton`1<AndroidAdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_1.h"
// AndroidAdMobController
struct  AndroidAdMobController_t118  : public SA_Singleton_1_t119
{
	// System.Boolean AndroidAdMobController::_IsInited
	bool ____IsInited_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,AndroidADBanner> AndroidAdMobController::_banners
	Dictionary_2_t117 * ____banners_8;
	// System.String AndroidAdMobController::_BannersUunitId
	String_t* ____BannersUunitId_9;
	// System.String AndroidAdMobController::_InterstisialUnitId
	String_t* ____InterstisialUnitId_10;
	// System.Action AndroidAdMobController::_OnInterstitialLoaded
	Action_t101 * ____OnInterstitialLoaded_11;
	// System.Action AndroidAdMobController::_OnInterstitialFailedLoading
	Action_t101 * ____OnInterstitialFailedLoading_12;
	// System.Action AndroidAdMobController::_OnInterstitialOpened
	Action_t101 * ____OnInterstitialOpened_13;
	// System.Action AndroidAdMobController::_OnInterstitialClosed
	Action_t101 * ____OnInterstitialClosed_14;
	// System.Action AndroidAdMobController::_OnInterstitialLeftApplication
	Action_t101 * ____OnInterstitialLeftApplication_15;
	// System.Action`1<System.String> AndroidAdMobController::_OnAdInAppRequest
	Action_1_t102 * ____OnAdInAppRequest_16;
};
struct AndroidAdMobController_t118_StaticFields{
	// System.Action AndroidAdMobController::<>f__am$cacheA
	Action_t101 * ___U3CU3Ef__amU24cacheA_17;
	// System.Action AndroidAdMobController::<>f__am$cacheB
	Action_t101 * ___U3CU3Ef__amU24cacheB_18;
	// System.Action AndroidAdMobController::<>f__am$cacheC
	Action_t101 * ___U3CU3Ef__amU24cacheC_19;
	// System.Action AndroidAdMobController::<>f__am$cacheD
	Action_t101 * ___U3CU3Ef__amU24cacheD_20;
	// System.Action AndroidAdMobController::<>f__am$cacheE
	Action_t101 * ___U3CU3Ef__amU24cacheE_21;
	// System.Action`1<System.String> AndroidAdMobController::<>f__am$cacheF
	Action_1_t102 * ___U3CU3Ef__amU24cacheF_22;
};
