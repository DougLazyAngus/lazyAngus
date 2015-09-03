#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidADBanner
struct AndroidADBanner_t215;
// System.Action`1<GoogleMobileAdBanner>
struct Action_1_t149;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t140;
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void AndroidADBanner::.ctor(UnityEngine.TextAnchor,GADBannerSize,System.Int32)
extern "C" void AndroidADBanner__ctor_m1253 (AndroidADBanner_t215 * __this, int32_t ___anchor, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::.ctor(System.Int32,System.Int32,GADBannerSize,System.Int32)
extern "C" void AndroidADBanner__ctor_m1254 (AndroidADBanner_t215 * __this, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::Hide()
extern "C" void AndroidADBanner_Hide_m1255 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::Show()
extern "C" void AndroidADBanner_Show_m1256 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::Refresh()
extern "C" void AndroidADBanner_Refresh_m1257 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::SetBannerPosition(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetBannerPosition_m1258 (AndroidADBanner_t215 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::SetBannerPosition(UnityEngine.TextAnchor)
extern "C" void AndroidADBanner_SetBannerPosition_m1259 (AndroidADBanner_t215 * __this, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::DestroyAfterLoad()
extern "C" void AndroidADBanner_DestroyAfterLoad_m1260 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::SetDimentions(System.Int32,System.Int32)
extern "C" void AndroidADBanner_SetDimentions_m1261 (AndroidADBanner_t215 * __this, int32_t ___w, int32_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_id()
extern "C" int32_t AndroidADBanner_get_id_m1262 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_width()
extern "C" int32_t AndroidADBanner_get_width_m1263 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_height()
extern "C" int32_t AndroidADBanner_get_height_m1264 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GADBannerSize AndroidADBanner::get_size()
extern "C" int32_t AndroidADBanner_get_size_m1265 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidADBanner::get_IsLoaded()
extern "C" bool AndroidADBanner_get_IsLoaded_m1266 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidADBanner::get_IsOnScreen()
extern "C" bool AndroidADBanner_get_IsOnScreen_m1267 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidADBanner::get_ShowOnLoad()
extern "C" bool AndroidADBanner_get_ShowOnLoad_m1268 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_ShowOnLoad(System.Boolean)
extern "C" void AndroidADBanner_set_ShowOnLoad_m1269 (AndroidADBanner_t215 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor AndroidADBanner::get_anchor()
extern "C" int32_t AndroidADBanner_get_anchor_m1270 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AndroidADBanner::get_gravity()
extern "C" int32_t AndroidADBanner_get_gravity_m1271 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLoadedAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnLoadedAction_m1272 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnLoadedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLoadedAction_m1273 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnFailedLoadingAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnFailedLoadingAction_m1274 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnFailedLoadingAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnFailedLoadingAction_m1275 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnOpenedAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnOpenedAction_m1276 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnOpenedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnOpenedAction_m1277 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnClosedAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnClosedAction_m1278 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnClosedAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnClosedAction_m1279 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GoogleMobileAdBanner> AndroidADBanner::get_OnLeftApplicationAction()
extern "C" Action_1_t149 * AndroidADBanner_get_OnLeftApplicationAction_m1280 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::set_OnLeftApplicationAction(System.Action`1<GoogleMobileAdBanner>)
extern "C" void AndroidADBanner_set_OnLeftApplicationAction_m1281 (AndroidADBanner_t215 * __this, Action_1_t149 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdLoaded()
extern "C" void AndroidADBanner_OnBannerAdLoaded_m1282 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdFailedToLoad()
extern "C" void AndroidADBanner_OnBannerAdFailedToLoad_m1283 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdOpened()
extern "C" void AndroidADBanner_OnBannerAdOpened_m1284 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdClosed()
extern "C" void AndroidADBanner_OnBannerAdClosed_m1285 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::OnBannerAdLeftApplication()
extern "C" void AndroidADBanner_OnBannerAdLeftApplication_m1286 (AndroidADBanner_t215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnLoadedAction>m__22(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLoadedActionU3Em__22_m1287 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnFailedLoadingAction>m__23(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnFailedLoadingActionU3Em__23_m1288 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnOpenedAction>m__24(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnOpenedActionU3Em__24_m1289 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnClosedAction>m__25(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnClosedActionU3Em__25_m1290 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidADBanner::<_OnLeftApplicationAction>m__26(GoogleMobileAdBanner)
extern "C" void AndroidADBanner_U3C_OnLeftApplicationActionU3Em__26_m1291 (Object_t * __this /* static, unused */, Object_t * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
