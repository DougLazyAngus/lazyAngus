#pragma once
#include <stdint.h>
// System.Action`1<GoogleMobileAdBanner>
struct Action_1_t109;
// UnionAssets.FLE.EventDispatcherBase
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcherBase.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// AndroidADBanner
struct  AndroidADBanner_t175  : public EventDispatcherBase_t90
{
	// System.Int32 AndroidADBanner::_id
	int32_t ____id_2;
	// GADBannerSize AndroidADBanner::_size
	int32_t ____size_3;
	// UnityEngine.TextAnchor AndroidADBanner::_anchor
	int32_t ____anchor_4;
	// System.Boolean AndroidADBanner::_IsLoaded
	bool ____IsLoaded_5;
	// System.Boolean AndroidADBanner::_IsOnScreen
	bool ____IsOnScreen_6;
	// System.Boolean AndroidADBanner::firstLoad
	bool ___firstLoad_7;
	// System.Boolean AndroidADBanner::destroyOnLoad
	bool ___destroyOnLoad_8;
	// System.Boolean AndroidADBanner::_ShowOnLoad
	bool ____ShowOnLoad_9;
	// System.Int32 AndroidADBanner::_width
	int32_t ____width_10;
	// System.Int32 AndroidADBanner::_height
	int32_t ____height_11;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::_OnLoadedAction
	Action_1_t109 * ____OnLoadedAction_12;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::_OnFailedLoadingAction
	Action_1_t109 * ____OnFailedLoadingAction_13;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::_OnOpenedAction
	Action_1_t109 * ____OnOpenedAction_14;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::_OnClosedAction
	Action_1_t109 * ____OnClosedAction_15;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::_OnLeftApplicationAction
	Action_1_t109 * ____OnLeftApplicationAction_16;
};
struct AndroidADBanner_t175_StaticFields{
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::<>f__am$cacheF
	Action_1_t109 * ___U3CU3Ef__amU24cacheF_17;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::<>f__am$cache10
	Action_1_t109 * ___U3CU3Ef__amU24cache10_18;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::<>f__am$cache11
	Action_1_t109 * ___U3CU3Ef__amU24cache11_19;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::<>f__am$cache12
	Action_1_t109 * ___U3CU3Ef__amU24cache12_20;
	// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::<>f__am$cache13
	Action_1_t109 * ___U3CU3Ef__amU24cache13_21;
};
