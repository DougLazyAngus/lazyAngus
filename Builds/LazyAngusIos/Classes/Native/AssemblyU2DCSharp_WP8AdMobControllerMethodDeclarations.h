#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WP8AdMobController
struct WP8AdMobController_t115;
// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t579;
// System.String
struct String_t;
// System.Action
struct Action_t101;
// System.Action`1<System.String>
struct Action_1_t102;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t98;
// System.String[]
struct StringU5BU5D_t45;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// GADInAppResolution
#include "AssemblyU2DCSharp_GADInAppResolution.h"
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// AndroidMonth
#include "AssemblyU2DCSharp_AndroidMonth.h"

// System.Void WP8AdMobController::.ctor()
extern "C" void WP8AdMobController__ctor_m653 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::Awake()
extern "C" void WP8AdMobController_Awake_m654 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::Init(System.String)
extern "C" void WP8AdMobController_Init_m655 (WP8AdMobController_t115 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::SetOrientation(UnityEngine.ScreenOrientation)
extern "C" void WP8AdMobController_SetOrientation_m656 (WP8AdMobController_t115 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::Init(System.String,System.String)
extern "C" void WP8AdMobController_Init_m657 (WP8AdMobController_t115 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::SetBannersUnitID(System.String)
extern "C" void WP8AdMobController_SetBannersUnitID_m658 (WP8AdMobController_t115 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::SetInterstisialsUnitID(System.String)
extern "C" void WP8AdMobController_SetInterstisialsUnitID_m659 (WP8AdMobController_t115 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner WP8AdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern "C" Object_t * WP8AdMobController_CreateAdBanner_m660 (WP8AdMobController_t115 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner WP8AdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern "C" Object_t * WP8AdMobController_CreateAdBanner_m661 (WP8AdMobController_t115 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::DestroyBanner(System.Int32)
extern "C" void WP8AdMobController_DestroyBanner_m662 (WP8AdMobController_t115 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void WP8AdMobController_RecordInAppResolution_m663 (WP8AdMobController_t115 * __this, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::AddKeyword(System.String)
extern "C" void WP8AdMobController_AddKeyword_m664 (WP8AdMobController_t115 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::AddTestDevice(System.String)
extern "C" void WP8AdMobController_AddTestDevice_m665 (WP8AdMobController_t115 * __this, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::AddTestDevices(System.String[])
extern "C" void WP8AdMobController_AddTestDevices_m666 (WP8AdMobController_t115 * __this, StringU5BU5D_t45* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::SetGender(GoogleGender)
extern "C" void WP8AdMobController_SetGender_m667 (WP8AdMobController_t115 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void WP8AdMobController_SetBirthday_m668 (WP8AdMobController_t115 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void WP8AdMobController_TagForChildDirectedTreatment_m669 (WP8AdMobController_t115 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::StartInterstitialAd()
extern "C" void WP8AdMobController_StartInterstitialAd_m670 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::LoadInterstitialAd()
extern "C" void WP8AdMobController_LoadInterstitialAd_m671 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::ShowInterstitialAd()
extern "C" void WP8AdMobController_ShowInterstitialAd_m672 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner WP8AdMobController::GetBanner(System.Int32)
extern "C" Object_t * WP8AdMobController_GetBanner_m673 (WP8AdMobController_t115 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GoogleMobileAdBanner> WP8AdMobController::get_banners()
extern "C" List_1_t579 * WP8AdMobController_get_banners_m674 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WP8AdMobController::get_IsInited()
extern "C" bool WP8AdMobController_get_IsInited_m675 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WP8AdMobController::get_BannersUunitId()
extern "C" String_t* WP8AdMobController_get_BannersUunitId_m676 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WP8AdMobController::get_InterstisialUnitId()
extern "C" String_t* WP8AdMobController_get_InterstisialUnitId_m677 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action WP8AdMobController::get_OnInterstitialLoaded()
extern "C" Action_t101 * WP8AdMobController_get_OnInterstitialLoaded_m678 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialLoaded_m679 (WP8AdMobController_t115 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action WP8AdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t101 * WP8AdMobController_get_OnInterstitialFailedLoading_m680 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialFailedLoading_m681 (WP8AdMobController_t115 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action WP8AdMobController::get_OnInterstitialOpened()
extern "C" Action_t101 * WP8AdMobController_get_OnInterstitialOpened_m682 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialOpened_m683 (WP8AdMobController_t115 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action WP8AdMobController::get_OnInterstitialClosed()
extern "C" Action_t101 * WP8AdMobController_get_OnInterstitialClosed_m684 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialClosed_m685 (WP8AdMobController_t115 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action WP8AdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t101 * WP8AdMobController_get_OnInterstitialLeftApplication_m686 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void WP8AdMobController_set_OnInterstitialLeftApplication_m687 (WP8AdMobController_t115 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.String> WP8AdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t102 * WP8AdMobController_get_OnAdInAppRequest_m688 (WP8AdMobController_t115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void WP8AdMobController_set_OnAdInAppRequest_m689 (WP8AdMobController_t115 * __this, Action_1_t102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnBannerAdLoaded(System.String)
extern "C" void WP8AdMobController_OnBannerAdLoaded_m690 (WP8AdMobController_t115 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnBannerAdFailedToLoad(System.String)
extern "C" void WP8AdMobController_OnBannerAdFailedToLoad_m691 (WP8AdMobController_t115 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnBannerAdOpened(System.String)
extern "C" void WP8AdMobController_OnBannerAdOpened_m692 (WP8AdMobController_t115 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnBannerAdClosed(System.String)
extern "C" void WP8AdMobController_OnBannerAdClosed_m693 (WP8AdMobController_t115 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnBannerAdLeftApplication(System.String)
extern "C" void WP8AdMobController_OnBannerAdLeftApplication_m694 (WP8AdMobController_t115 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnInterstitialAdLoaded(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdLoaded_m695 (WP8AdMobController_t115 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnInterstitialAdFailedToLoad(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdFailedToLoad_m696 (WP8AdMobController_t115 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnInterstitialAdOpened(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdOpened_m697 (WP8AdMobController_t115 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnInterstitialAdClosed(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdClosed_m698 (WP8AdMobController_t115 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnInterstitialAdLeftApplication(System.String)
extern "C" void WP8AdMobController_OnInterstitialAdLeftApplication_m699 (WP8AdMobController_t115 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void WP8AdMobController_OnInAppPurchaseRequested_m700 (WP8AdMobController_t115 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::<_OnInterstitialLoaded>m__16()
extern "C" void WP8AdMobController_U3C_OnInterstitialLoadedU3Em__16_m701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::<_OnInterstitialFailedLoading>m__17()
extern "C" void WP8AdMobController_U3C_OnInterstitialFailedLoadingU3Em__17_m702 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::<_OnInterstitialOpened>m__18()
extern "C" void WP8AdMobController_U3C_OnInterstitialOpenedU3Em__18_m703 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::<_OnInterstitialClosed>m__19()
extern "C" void WP8AdMobController_U3C_OnInterstitialClosedU3Em__19_m704 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::<_OnInterstitialLeftApplication>m__1A()
extern "C" void WP8AdMobController_U3C_OnInterstitialLeftApplicationU3Em__1A_m705 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WP8AdMobController::<_OnAdInAppRequest>m__1B(System.String)
extern "C" void WP8AdMobController_U3C_OnAdInAppRequestU3Em__1B_m706 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
