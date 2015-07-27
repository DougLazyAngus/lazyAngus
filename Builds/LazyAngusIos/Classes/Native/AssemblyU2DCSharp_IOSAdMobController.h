#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner>
struct Dictionary_2_t111;
// System.Action
struct Action_t103;
// System.Action`1<System.String>
struct Action_1_t104;
// SA_Singleton`1<IOSAdMobController>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen.h"
// IOSAdMobController
struct  IOSAdMobController_t112  : public SA_Singleton_1_t113
{
	// System.Boolean IOSAdMobController::_IsInited
	bool ____IsInited_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,IOSADBanner> IOSAdMobController::_banners
	Dictionary_2_t111 * ____banners_8;
	// System.String IOSAdMobController::_BannersUunitId
	String_t* ____BannersUunitId_9;
	// System.String IOSAdMobController::_InterstisialUnitId
	String_t* ____InterstisialUnitId_10;
	// System.Action IOSAdMobController::_OnInterstitialLoaded
	Action_t103 * ____OnInterstitialLoaded_11;
	// System.Action IOSAdMobController::_OnInterstitialFailedLoading
	Action_t103 * ____OnInterstitialFailedLoading_12;
	// System.Action IOSAdMobController::_OnInterstitialOpened
	Action_t103 * ____OnInterstitialOpened_13;
	// System.Action IOSAdMobController::_OnInterstitialClosed
	Action_t103 * ____OnInterstitialClosed_14;
	// System.Action IOSAdMobController::_OnInterstitialLeftApplication
	Action_t103 * ____OnInterstitialLeftApplication_15;
	// System.Action`1<System.String> IOSAdMobController::_OnAdInAppRequest
	Action_1_t104 * ____OnAdInAppRequest_16;
};
struct IOSAdMobController_t112_StaticFields{
	// System.Action IOSAdMobController::<>f__am$cacheA
	Action_t103 * ___U3CU3Ef__amU24cacheA_17;
	// System.Action IOSAdMobController::<>f__am$cacheB
	Action_t103 * ___U3CU3Ef__amU24cacheB_18;
	// System.Action IOSAdMobController::<>f__am$cacheC
	Action_t103 * ___U3CU3Ef__amU24cacheC_19;
	// System.Action IOSAdMobController::<>f__am$cacheD
	Action_t103 * ___U3CU3Ef__amU24cacheD_20;
	// System.Action IOSAdMobController::<>f__am$cacheE
	Action_t103 * ___U3CU3Ef__amU24cacheE_21;
	// System.Action`1<System.String> IOSAdMobController::<>f__am$cacheF
	Action_1_t104 * ___U3CU3Ef__amU24cacheF_22;
};
