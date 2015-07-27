#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidAdMobController
struct AndroidAdMobController_t120;
// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t581;
// System.String
struct String_t;
// System.Action
struct Action_t103;
// System.Action`1<System.String>
struct Action_1_t104;
// System.String[]
struct StringU5BU5D_t45;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t100;
// AndroidMonth
#include "AssemblyU2DCSharp_AndroidMonth.h"
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// GADInAppResolution
#include "AssemblyU2DCSharp_GADInAppResolution.h"

// System.Void AndroidAdMobController::.ctor()
extern "C" void AndroidAdMobController__ctor_m709 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::Awake()
extern "C" void AndroidAdMobController_Awake_m710 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::Init(System.String)
extern "C" void AndroidAdMobController_Init_m711 (AndroidAdMobController_t120 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::Init(System.String,System.String)
extern "C" void AndroidAdMobController_Init_m712 (AndroidAdMobController_t120 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::SetBannersUnitID(System.String)
extern "C" void AndroidAdMobController_SetBannersUnitID_m713 (AndroidAdMobController_t120 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::SetInterstisialsUnitID(System.String)
extern "C" void AndroidAdMobController_SetInterstisialsUnitID_m714 (AndroidAdMobController_t120 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::AddKeyword(System.String)
extern "C" void AndroidAdMobController_AddKeyword_m715 (AndroidAdMobController_t120 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void AndroidAdMobController_SetBirthday_m716 (AndroidAdMobController_t120 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void AndroidAdMobController_TagForChildDirectedTreatment_m717 (AndroidAdMobController_t120 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::AddTestDevice(System.String)
extern "C" void AndroidAdMobController_AddTestDevice_m718 (AndroidAdMobController_t120 * __this, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::AddTestDevices(System.String[])
extern "C" void AndroidAdMobController_AddTestDevices_m719 (AndroidAdMobController_t120 * __this, StringU5BU5D_t45* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::SetGender(GoogleGender)
extern "C" void AndroidAdMobController_SetGender_m720 (AndroidAdMobController_t120 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner AndroidAdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern "C" Object_t * AndroidAdMobController_CreateAdBanner_m721 (AndroidAdMobController_t120 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner AndroidAdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern "C" Object_t * AndroidAdMobController_CreateAdBanner_m722 (AndroidAdMobController_t120 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::DestroyBanner(System.Int32)
extern "C" void AndroidAdMobController_DestroyBanner_m723 (AndroidAdMobController_t120 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::StartInterstitialAd()
extern "C" void AndroidAdMobController_StartInterstitialAd_m724 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::LoadInterstitialAd()
extern "C" void AndroidAdMobController_LoadInterstitialAd_m725 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::ShowInterstitialAd()
extern "C" void AndroidAdMobController_ShowInterstitialAd_m726 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void AndroidAdMobController_RecordInAppResolution_m727 (AndroidAdMobController_t120 * __this, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner AndroidAdMobController::GetBanner(System.Int32)
extern "C" Object_t * AndroidAdMobController_GetBanner_m728 (AndroidAdMobController_t120 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GoogleMobileAdBanner> AndroidAdMobController::get_banners()
extern "C" List_1_t581 * AndroidAdMobController_get_banners_m729 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidAdMobController::get_IsInited()
extern "C" bool AndroidAdMobController_get_IsInited_m730 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidAdMobController::get_BannersUunitId()
extern "C" String_t* AndroidAdMobController_get_BannersUunitId_m731 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidAdMobController::get_InterstisialUnitId()
extern "C" String_t* AndroidAdMobController_get_InterstisialUnitId_m732 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action AndroidAdMobController::get_OnInterstitialLoaded()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialLoaded_m733 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialLoaded_m734 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action AndroidAdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialFailedLoading_m735 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialFailedLoading_m736 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action AndroidAdMobController::get_OnInterstitialOpened()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialOpened_m737 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialOpened_m738 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action AndroidAdMobController::get_OnInterstitialClosed()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialClosed_m739 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialClosed_m740 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action AndroidAdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t103 * AndroidAdMobController_get_OnInterstitialLeftApplication_m741 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void AndroidAdMobController_set_OnInterstitialLeftApplication_m742 (AndroidAdMobController_t120 * __this, Action_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.String> AndroidAdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t104 * AndroidAdMobController_get_OnAdInAppRequest_m743 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void AndroidAdMobController_set_OnAdInAppRequest_m744 (AndroidAdMobController_t120 * __this, Action_1_t104 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnBannerAdLoaded(System.String)
extern "C" void AndroidAdMobController_OnBannerAdLoaded_m745 (AndroidAdMobController_t120 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnBannerAdFailedToLoad(System.String)
extern "C" void AndroidAdMobController_OnBannerAdFailedToLoad_m746 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnBannerAdOpened(System.String)
extern "C" void AndroidAdMobController_OnBannerAdOpened_m747 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnBannerAdClosed(System.String)
extern "C" void AndroidAdMobController_OnBannerAdClosed_m748 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnBannerAdLeftApplication(System.String)
extern "C" void AndroidAdMobController_OnBannerAdLeftApplication_m749 (AndroidAdMobController_t120 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnInterstitialAdLoaded()
extern "C" void AndroidAdMobController_OnInterstitialAdLoaded_m750 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnInterstitialAdFailedToLoad()
extern "C" void AndroidAdMobController_OnInterstitialAdFailedToLoad_m751 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnInterstitialAdOpened()
extern "C" void AndroidAdMobController_OnInterstitialAdOpened_m752 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnInterstitialAdClosed()
extern "C" void AndroidAdMobController_OnInterstitialAdClosed_m753 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnInterstitialAdLeftApplication()
extern "C" void AndroidAdMobController_OnInterstitialAdLeftApplication_m754 (AndroidAdMobController_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void AndroidAdMobController_OnInAppPurchaseRequested_m755 (AndroidAdMobController_t120 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::<_OnInterstitialLoaded>m__1C()
extern "C" void AndroidAdMobController_U3C_OnInterstitialLoadedU3Em__1C_m756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::<_OnInterstitialFailedLoading>m__1D()
extern "C" void AndroidAdMobController_U3C_OnInterstitialFailedLoadingU3Em__1D_m757 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::<_OnInterstitialOpened>m__1E()
extern "C" void AndroidAdMobController_U3C_OnInterstitialOpenedU3Em__1E_m758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::<_OnInterstitialClosed>m__1F()
extern "C" void AndroidAdMobController_U3C_OnInterstitialClosedU3Em__1F_m759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::<_OnInterstitialLeftApplication>m__20()
extern "C" void AndroidAdMobController_U3C_OnInterstitialLeftApplicationU3Em__20_m760 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidAdMobController::<_OnAdInAppRequest>m__21(System.String)
extern "C" void AndroidAdMobController_U3C_OnAdInAppRequestU3Em__21_m761 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
