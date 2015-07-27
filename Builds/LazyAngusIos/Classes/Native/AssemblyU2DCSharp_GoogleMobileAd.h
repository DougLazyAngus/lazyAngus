#pragma once
#include <stdint.h>
// GoogleMobileAdInterface
struct GoogleMobileAdInterface_t102;
// System.Action
struct Action_t103;
// System.Action`1<System.String>
struct Action_1_t104;
// System.Object
#include "mscorlib_System_Object.h"
// GoogleMobileAd
struct  GoogleMobileAd_t105  : public Object_t
{
};
struct GoogleMobileAd_t105_StaticFields{
	// GoogleMobileAdInterface GoogleMobileAd::controller
	Object_t * ___controller_0;
	// System.Boolean GoogleMobileAd::_IsInited
	bool ____IsInited_1;
	// System.Action GoogleMobileAd::OnInterstitialLoaded
	Action_t103 * ___OnInterstitialLoaded_2;
	// System.Action GoogleMobileAd::OnInterstitialFailedLoading
	Action_t103 * ___OnInterstitialFailedLoading_3;
	// System.Action GoogleMobileAd::OnInterstitialOpened
	Action_t103 * ___OnInterstitialOpened_4;
	// System.Action GoogleMobileAd::OnInterstitialClosed
	Action_t103 * ___OnInterstitialClosed_5;
	// System.Action GoogleMobileAd::OnInterstitialLeftApplication
	Action_t103 * ___OnInterstitialLeftApplication_6;
	// System.Action`1<System.String> GoogleMobileAd::OnAdInAppRequest
	Action_1_t104 * ___OnAdInAppRequest_7;
	// System.Action GoogleMobileAd::<>f__am$cache8
	Action_t103 * ___U3CU3Ef__amU24cache8_8;
	// System.Action GoogleMobileAd::<>f__am$cache9
	Action_t103 * ___U3CU3Ef__amU24cache9_9;
	// System.Action GoogleMobileAd::<>f__am$cacheA
	Action_t103 * ___U3CU3Ef__amU24cacheA_10;
	// System.Action GoogleMobileAd::<>f__am$cacheB
	Action_t103 * ___U3CU3Ef__amU24cacheB_11;
	// System.Action GoogleMobileAd::<>f__am$cacheC
	Action_t103 * ___U3CU3Ef__amU24cacheC_12;
	// System.Action`1<System.String> GoogleMobileAd::<>f__am$cacheD
	Action_1_t104 * ___U3CU3Ef__amU24cacheD_13;
};
