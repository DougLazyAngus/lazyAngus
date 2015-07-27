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
// IOSADBanner
struct  IOSADBanner_t110  : public EventDispatcherBase_t90
{
	// System.Int32 IOSADBanner::_id
	int32_t ____id_2;
	// GADBannerSize IOSADBanner::_size
	int32_t ____size_3;
	// UnityEngine.TextAnchor IOSADBanner::_anchor
	int32_t ____anchor_4;
	// System.Boolean IOSADBanner::_IsLoaded
	bool ____IsLoaded_5;
	// System.Boolean IOSADBanner::_IsOnScreen
	bool ____IsOnScreen_6;
	// System.Boolean IOSADBanner::firstLoad
	bool ___firstLoad_7;
	// System.Boolean IOSADBanner::_ShowOnLoad
	bool ____ShowOnLoad_8;
	// System.Boolean IOSADBanner::destroyOnLoad
	bool ___destroyOnLoad_9;
	// System.Int32 IOSADBanner::_width
	int32_t ____width_10;
	// System.Int32 IOSADBanner::_height
	int32_t ____height_11;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::_OnLoadedAction
	Action_1_t109 * ____OnLoadedAction_12;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::_OnFailedLoadingAction
	Action_1_t109 * ____OnFailedLoadingAction_13;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::_OnOpenedAction
	Action_1_t109 * ____OnOpenedAction_14;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::_OnClosedAction
	Action_1_t109 * ____OnClosedAction_15;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::_OnLeftApplicationAction
	Action_1_t109 * ____OnLeftApplicationAction_16;
};
struct IOSADBanner_t110_StaticFields{
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::<>f__am$cacheF
	Action_1_t109 * ___U3CU3Ef__amU24cacheF_17;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::<>f__am$cache10
	Action_1_t109 * ___U3CU3Ef__amU24cache10_18;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::<>f__am$cache11
	Action_1_t109 * ___U3CU3Ef__amU24cache11_19;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::<>f__am$cache12
	Action_1_t109 * ___U3CU3Ef__amU24cache12_20;
	// System.Action`1<GoogleMobileAdBanner> IOSADBanner::<>f__am$cache13
	Action_1_t109 * ___U3CU3Ef__amU24cache13_21;
};
