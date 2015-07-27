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
// WP8ADBanner
struct  WP8ADBanner_t115  : public EventDispatcherBase_t90
{
	// System.Int32 WP8ADBanner::_id
	int32_t ____id_2;
	// GADBannerSize WP8ADBanner::_size
	int32_t ____size_3;
	// UnityEngine.TextAnchor WP8ADBanner::_anchor
	int32_t ____anchor_4;
	// System.Boolean WP8ADBanner::_IsLoaded
	bool ____IsLoaded_5;
	// System.Boolean WP8ADBanner::_IsOnScreen
	bool ____IsOnScreen_6;
	// System.Boolean WP8ADBanner::firstLoad
	bool ___firstLoad_7;
	// System.Boolean WP8ADBanner::_ShowOnLoad
	bool ____ShowOnLoad_8;
	// System.Boolean WP8ADBanner::destroyOnLoad
	bool ___destroyOnLoad_9;
	// System.Int32 WP8ADBanner::_width
	int32_t ____width_10;
	// System.Int32 WP8ADBanner::_height
	int32_t ____height_11;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::_OnLoadedAction
	Action_1_t109 * ____OnLoadedAction_12;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::_OnFailedLoadingAction
	Action_1_t109 * ____OnFailedLoadingAction_13;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::_OnOpenedAction
	Action_1_t109 * ____OnOpenedAction_14;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::_OnClosedAction
	Action_1_t109 * ____OnClosedAction_15;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::_OnLeftApplicationAction
	Action_1_t109 * ____OnLeftApplicationAction_16;
};
struct WP8ADBanner_t115_StaticFields{
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::<>f__am$cacheF
	Action_1_t109 * ___U3CU3Ef__amU24cacheF_17;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::<>f__am$cache10
	Action_1_t109 * ___U3CU3Ef__amU24cache10_18;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::<>f__am$cache11
	Action_1_t109 * ___U3CU3Ef__amU24cache11_19;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::<>f__am$cache12
	Action_1_t109 * ___U3CU3Ef__amU24cache12_20;
	// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::<>f__am$cache13
	Action_1_t109 * ___U3CU3Ef__amU24cache13_21;
};
