#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WP8ADBanner
struct WP8ADBanner_t113;
// System.Action`1<GoogleMobileAdBanner>
struct Action_1_t107;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t98;
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void WP8ADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern "C" void WP8ADBanner__ctor_m614 (WP8ADBanner_t113 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern "C" void WP8ADBanner__ctor_m615 (WP8ADBanner_t113 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::Hide()
extern "C" void WP8ADBanner_Hide_m616 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::Show()
extern "C" void WP8ADBanner_Show_m617 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::Refresh()
extern "C" void WP8ADBanner_Refresh_m618 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void WP8ADBanner_SetBannerPosition_m619 (WP8ADBanner_t113 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void WP8ADBanner_SetBannerPosition_m620 (WP8ADBanner_t113 * __this, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::DestroyAfterLoad()
extern "C" void WP8ADBanner_DestroyAfterLoad_m621 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void WP8ADBanner_SetDimentions_m622 (WP8ADBanner_t113 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WP8ADBanner::get_id()
extern "C" int32_t WP8ADBanner_get_id_m623 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WP8ADBanner::get_width()
extern "C" int32_t WP8ADBanner_get_width_m624 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WP8ADBanner::get_height()
extern "C" int32_t WP8ADBanner_get_height_m625 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GADBannerSize WP8ADBanner::get_size()
extern "C" int32_t WP8ADBanner_get_size_m626 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WP8ADBanner::get_IsLoaded()
extern "C" bool WP8ADBanner_get_IsLoaded_m627 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WP8ADBanner::get_IsOnScreen()
extern "C" bool WP8ADBanner_get_IsOnScreen_m628 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WP8ADBanner::get_ShowOnLoad()
extern "C" bool WP8ADBanner_get_ShowOnLoad_m629 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void WP8ADBanner_set_ShowOnLoad_m630 (WP8ADBanner_t113 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor WP8ADBanner::get_anchor()
extern "C" int32_t WP8ADBanner_get_anchor_m631 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WP8ADBanner::get_gravity()
extern "C" int32_t WP8ADBanner_get_gravity_m632 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnLoadedAction()
extern "C" Action_1_t107 * WP8ADBanner_get_OnLoadedAction_m633 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnLoadedAction_m634 (WP8ADBanner_t113 * __this, Action_1_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t107 * WP8ADBanner_get_OnFailedLoadingAction_m635 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnFailedLoadingAction_m636 (WP8ADBanner_t113 * __this, Action_1_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnOpenedAction()
extern "C" Action_1_t107 * WP8ADBanner_get_OnOpenedAction_m637 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnOpenedAction_m638 (WP8ADBanner_t113 * __this, Action_1_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnClosedAction()
extern "C" Action_1_t107 * WP8ADBanner_get_OnClosedAction_m639 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnClosedAction_m640 (WP8ADBanner_t113 * __this, Action_1_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> WP8ADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t107 * WP8ADBanner_get_OnLeftApplicationAction_m641 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void WP8ADBanner_set_OnLeftApplicationAction_m642 (WP8ADBanner_t113 * __this, Action_1_t107 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::OnBannerAdLoaded()
extern "C" void WP8ADBanner_OnBannerAdLoaded_m643 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::OnBannerAdFailedToLoad()
extern "C" void WP8ADBanner_OnBannerAdFailedToLoad_m644 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::OnBannerAdOpened()
extern "C" void WP8ADBanner_OnBannerAdOpened_m645 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::OnBannerAdClosed()
extern "C" void WP8ADBanner_OnBannerAdClosed_m646 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::OnBannerAdLeftApplication()
extern "C" void WP8ADBanner_OnBannerAdLeftApplication_m647 (WP8ADBanner_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::<_OnLoadedAction>m__11(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnLoadedActionU3Em__11_m648 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::<_OnFailedLoadingAction>m__12(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnFailedLoadingActionU3Em__12_m649 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::<_OnOpenedAction>m__13(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnOpenedActionU3Em__13_m650 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::<_OnClosedAction>m__14(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnClosedActionU3Em__14_m651 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8ADBanner::<_OnLeftApplicationAction>m__15(GoogleMobileAdBanner)
extern "C" void WP8ADBanner_U3C_OnLeftApplicationActionU3Em__15_m652 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
