#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSADBanner
struct IOSADBanner_t150;
// System.Action`1<GoogleMobileAdBanner>
struct Action_1_t149;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void IOSADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern "C" void IOSADBanner__ctor_m772 (IOSADBanner_t150 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern "C" void IOSADBanner__ctor_m773 (IOSADBanner_t150 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADCreateBannerAd(System.Int32,System.Int32,System.Int32)
extern "C" void IOSADBanner__GADCreateBannerAd_m774 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADCreateBannerAdPos(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void IOSADBanner__GADCreateBannerAdPos_m775 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADShowAd(System.Int32)
extern "C" void IOSADBanner__GADShowAd_m776 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADHideAd(System.Int32)
extern "C" void IOSADBanner__GADHideAd_m777 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADRefresh(System.Int32)
extern "C" void IOSADBanner__GADRefresh_m778 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADSetPosition(System.Int32,System.Int32)
extern "C" void IOSADBanner__GADSetPosition_m779 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___bannerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::_GADSetPositionXY(System.Int32,System.Int32,System.Int32)
extern "C" void IOSADBanner__GADSetPositionXY_m780 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___bannerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::Hide()
extern "C" void IOSADBanner_Hide_m781 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::Show()
extern "C" void IOSADBanner_Show_m782 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::Refresh()
extern "C" void IOSADBanner_Refresh_m783 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void IOSADBanner_SetBannerPosition_m784 (IOSADBanner_t150 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void IOSADBanner_SetBannerPosition_m785 (IOSADBanner_t150 * __this, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::DestroyAfterLoad()
extern "C" void IOSADBanner_DestroyAfterLoad_m786 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void IOSADBanner_SetDimentions_m787 (IOSADBanner_t150 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSADBanner::get_id()
extern "C" int32_t IOSADBanner_get_id_m788 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSADBanner::get_width()
extern "C" int32_t IOSADBanner_get_width_m789 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSADBanner::get_height()
extern "C" int32_t IOSADBanner_get_height_m790 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GADBannerSize IOSADBanner::get_size()
extern "C" int32_t IOSADBanner_get_size_m791 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSADBanner::get_IsLoaded()
extern "C" bool IOSADBanner_get_IsLoaded_m792 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSADBanner::get_IsOnScreen()
extern "C" bool IOSADBanner_get_IsOnScreen_m793 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSADBanner::get_ShowOnLoad()
extern "C" bool IOSADBanner_get_ShowOnLoad_m794 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void IOSADBanner_set_ShowOnLoad_m795 (IOSADBanner_t150 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor IOSADBanner::get_anchor()
extern "C" int32_t IOSADBanner_get_anchor_m796 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSADBanner::get_gravity()
extern "C" int32_t IOSADBanner_get_gravity_m797 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnLoadedAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnLoadedAction_m798 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnLoadedAction_m799 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnFailedLoadingAction_m800 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnFailedLoadingAction_m801 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnOpenedAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnOpenedAction_m802 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnOpenedAction_m803 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnClosedAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnClosedAction_m804 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnClosedAction_m805 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> IOSADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t149 * IOSADBanner_get_OnLeftApplicationAction_m806 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void IOSADBanner_set_OnLeftApplicationAction_m807 (IOSADBanner_t150 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::OnBannerAdLoaded()
extern "C" void IOSADBanner_OnBannerAdLoaded_m808 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::OnBannerAdFailedToLoad()
extern "C" void IOSADBanner_OnBannerAdFailedToLoad_m809 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::OnBannerAdOpened()
extern "C" void IOSADBanner_OnBannerAdOpened_m810 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::OnBannerAdClosed()
extern "C" void IOSADBanner_OnBannerAdClosed_m811 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::OnBannerAdLeftApplication()
extern "C" void IOSADBanner_OnBannerAdLeftApplication_m812 (IOSADBanner_t150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::<_OnLoadedAction>m__6(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnLoadedActionU3Em__6_m813 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::<_OnFailedLoadingAction>m__7(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnFailedLoadingActionU3Em__7_m814 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::<_OnOpenedAction>m__8(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnOpenedActionU3Em__8_m815 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::<_OnClosedAction>m__9(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnClosedActionU3Em__9_m816 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSADBanner::<_OnLeftApplicationAction>m__A(GoogleMobileAdBanner)
extern "C" void IOSADBanner_U3C_OnLeftApplicationActionU3Em__A_m817 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
