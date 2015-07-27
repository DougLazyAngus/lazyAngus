#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidADBanner
struct AndroidADBanner_t175;
// System.Action`1<GoogleMobileAdBanner>
struct Action_1_t109;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t100;
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void AndroidADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern "C" void AndroidADBanner__ctor_m980 (AndroidADBanner_t175 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern "C" void AndroidADBanner__ctor_m981 (AndroidADBanner_t175 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::Hide()
extern "C" void AndroidADBanner_Hide_m982 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::Show()
extern "C" void AndroidADBanner_Show_m983 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::Refresh()
extern "C" void AndroidADBanner_Refresh_m984 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetBannerPosition_m985 (AndroidADBanner_t175 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void AndroidADBanner_SetBannerPosition_m986 (AndroidADBanner_t175 * __this, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::DestroyAfterLoad()
extern "C" void AndroidADBanner_DestroyAfterLoad_m987 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetDimentions_m988 (AndroidADBanner_t175 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_id()
extern "C" int32_t AndroidADBanner_get_id_m989 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_width()
extern "C" int32_t AndroidADBanner_get_width_m990 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_height()
extern "C" int32_t AndroidADBanner_get_height_m991 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GADBannerSize AndroidADBanner::get_size()
extern "C" int32_t AndroidADBanner_get_size_m992 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidADBanner::get_IsLoaded()
extern "C" bool AndroidADBanner_get_IsLoaded_m993 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidADBanner::get_IsOnScreen()
extern "C" bool AndroidADBanner_get_IsOnScreen_m994 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidADBanner::get_ShowOnLoad()
extern "C" bool AndroidADBanner_get_ShowOnLoad_m995 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void AndroidADBanner_set_ShowOnLoad_m996 (AndroidADBanner_t175 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor AndroidADBanner::get_anchor()
extern "C" int32_t AndroidADBanner_get_anchor_m997 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_gravity()
extern "C" int32_t AndroidADBanner_get_gravity_m998 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLoadedAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnLoadedAction_m999 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLoadedAction_m1000 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnFailedLoadingAction_m1001 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnFailedLoadingAction_m1002 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnOpenedAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnOpenedAction_m1003 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnOpenedAction_m1004 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnClosedAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnClosedAction_m1005 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnClosedAction_m1006 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t109 * AndroidADBanner_get_OnLeftApplicationAction_m1007 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLeftApplicationAction_m1008 (AndroidADBanner_t175 * __this, Action_1_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdLoaded()
extern "C" void AndroidADBanner_OnBannerAdLoaded_m1009 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdFailedToLoad()
extern "C" void AndroidADBanner_OnBannerAdFailedToLoad_m1010 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdOpened()
extern "C" void AndroidADBanner_OnBannerAdOpened_m1011 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdClosed()
extern "C" void AndroidADBanner_OnBannerAdClosed_m1012 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdLeftApplication()
extern "C" void AndroidADBanner_OnBannerAdLeftApplication_m1013 (AndroidADBanner_t175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnLoadedAction>m__22(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1014 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnFailedLoadingAction>m__23(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1015 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnOpenedAction>m__24(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1016 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnClosedAction>m__25(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnClosedActionU3Em__25_m1017 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnLeftApplicationAction>m__26(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1018 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
