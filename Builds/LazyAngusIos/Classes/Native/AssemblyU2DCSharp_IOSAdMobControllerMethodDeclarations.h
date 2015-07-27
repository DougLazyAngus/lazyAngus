#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// IOSAdMobController
struct IOSAdMobController_t110;
// System.Collections.Generic.List`1<GoogleMobileAdBanner>
struct List_1_t580;
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

// System.Void IOSAdMobController::.ctor()
extern "C" void IOSAdMobController__ctor_m545 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_initGoogleAd(System.String)
extern "C" void IOSAdMobController__initGoogleAd_m546 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADChangeBannersUnitID(System.String)
extern "C" void IOSAdMobController__GADChangeBannersUnitID_m547 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADChangeInterstisialsUnitID(System.String)
extern "C" void IOSAdMobController__GADChangeInterstisialsUnitID_m548 (Object_t * __this /* static, unused */, String_t* ___unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADAddKeyWord(System.String)
extern "C" void IOSAdMobController__GADAddKeyWord_m549 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADAddTestDevice(System.String)
extern "C" void IOSAdMobController__GADAddTestDevice_m550 (Object_t * __this /* static, unused */, String_t* ___uid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADAddTestDevices(System.String)
extern "C" void IOSAdMobController__GADAddTestDevices_m551 (Object_t * __this /* static, unused */, String_t* ___uids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADSetGender(System.Int32)
extern "C" void IOSAdMobController__GADSetGender_m552 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADSetBirthday(System.Int32,System.Int32,System.Int32)
extern "C" void IOSAdMobController__GADSetBirthday_m553 (Object_t * __this /* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADTagForChildDirectedTreatment(System.Boolean)
extern "C" void IOSAdMobController__GADTagForChildDirectedTreatment_m554 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADDestroyBanner(System.Int32)
extern "C" void IOSAdMobController__GADDestroyBanner_m555 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADStartInterstitialAd()
extern "C" void IOSAdMobController__GADStartInterstitialAd_m556 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADLoadInterstitialAd()
extern "C" void IOSAdMobController__GADLoadInterstitialAd_m557 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADShowInterstitialAd()
extern "C" void IOSAdMobController__GADShowInterstitialAd_m558 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::_GADReportPurchaseStatus(System.Int32)
extern "C" void IOSAdMobController__GADReportPurchaseStatus_m559 (Object_t * __this /* static, unused */, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::Awake()
extern "C" void IOSAdMobController_Awake_m560 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::Init(System.String)
extern "C" void IOSAdMobController_Init_m561 (IOSAdMobController_t110 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::Init(System.String,System.String)
extern "C" void IOSAdMobController_Init_m562 (IOSAdMobController_t110 * __this, String_t* ___banners_unit_id, String_t* ___interstisial_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::SetBannersUnitID(System.String)
extern "C" void IOSAdMobController_SetBannersUnitID_m563 (IOSAdMobController_t110 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::SetInterstisialsUnitID(System.String)
extern "C" void IOSAdMobController_SetInterstisialsUnitID_m564 (IOSAdMobController_t110 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner IOSAdMobController::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern "C" Object_t * IOSAdMobController_CreateAdBanner_m565 (IOSAdMobController_t110 * __this, int32_t ___anchor, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner IOSAdMobController::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern "C" Object_t * IOSAdMobController_CreateAdBanner_m566 (IOSAdMobController_t110 * __this, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::DestroyBanner(System.Int32)
extern "C" void IOSAdMobController_DestroyBanner_m567 (IOSAdMobController_t110 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::DirectBannerDestory(System.Int32)
extern "C" void IOSAdMobController_DirectBannerDestory_m568 (IOSAdMobController_t110 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::RecordInAppResolution(GADInAppResolution)
extern "C" void IOSAdMobController_RecordInAppResolution_m569 (IOSAdMobController_t110 * __this, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::AddKeyword(System.String)
extern "C" void IOSAdMobController_AddKeyword_m570 (IOSAdMobController_t110 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::AddTestDevice(System.String)
extern "C" void IOSAdMobController_AddTestDevice_m571 (IOSAdMobController_t110 * __this, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::AddTestDevices(System.String[])
extern "C" void IOSAdMobController_AddTestDevices_m572 (IOSAdMobController_t110 * __this, StringU5BU5D_t45* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::SetGender(GoogleGender)
extern "C" void IOSAdMobController_SetGender_m573 (IOSAdMobController_t110 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void IOSAdMobController_SetBirthday_m574 (IOSAdMobController_t110 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::TagForChildDirectedTreatment(System.Boolean)
extern "C" void IOSAdMobController_TagForChildDirectedTreatment_m575 (IOSAdMobController_t110 * __this, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::StartInterstitialAd()
extern "C" void IOSAdMobController_StartInterstitialAd_m576 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::LoadInterstitialAd()
extern "C" void IOSAdMobController_LoadInterstitialAd_m577 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::ShowInterstitialAd()
extern "C" void IOSAdMobController_ShowInterstitialAd_m578 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner IOSAdMobController::GetBanner(System.Int32)
extern "C" Object_t * IOSAdMobController_GetBanner_m579 (IOSAdMobController_t110 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GoogleMobileAdBanner> IOSAdMobController::get_banners()
extern "C" List_1_t580 * IOSAdMobController_get_banners_m580 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSAdMobController::get_IsInited()
extern "C" bool IOSAdMobController_get_IsInited_m581 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSAdMobController::get_BannersUunitId()
extern "C" String_t* IOSAdMobController_get_BannersUunitId_m582 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSAdMobController::get_InterstisialUnitId()
extern "C" String_t* IOSAdMobController_get_InterstisialUnitId_m583 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action IOSAdMobController::get_OnInterstitialLoaded()
extern "C" Action_t101 * IOSAdMobController_get_OnInterstitialLoaded_m584 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::set_OnInterstitialLoaded(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialLoaded_m585 (IOSAdMobController_t110 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action IOSAdMobController::get_OnInterstitialFailedLoading()
extern "C" Action_t101 * IOSAdMobController_get_OnInterstitialFailedLoading_m586 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::set_OnInterstitialFailedLoading(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialFailedLoading_m587 (IOSAdMobController_t110 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action IOSAdMobController::get_OnInterstitialOpened()
extern "C" Action_t101 * IOSAdMobController_get_OnInterstitialOpened_m588 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::set_OnInterstitialOpened(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialOpened_m589 (IOSAdMobController_t110 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action IOSAdMobController::get_OnInterstitialClosed()
extern "C" Action_t101 * IOSAdMobController_get_OnInterstitialClosed_m590 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::set_OnInterstitialClosed(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialClosed_m591 (IOSAdMobController_t110 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action IOSAdMobController::get_OnInterstitialLeftApplication()
extern "C" Action_t101 * IOSAdMobController_get_OnInterstitialLeftApplication_m592 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::set_OnInterstitialLeftApplication(System.Action)
extern "C" void IOSAdMobController_set_OnInterstitialLeftApplication_m593 (IOSAdMobController_t110 * __this, Action_t101 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<System.String> IOSAdMobController::get_OnAdInAppRequest()
extern "C" Action_1_t102 * IOSAdMobController_get_OnAdInAppRequest_m594 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::set_OnAdInAppRequest(System.Action`1<System.String>)
extern "C" void IOSAdMobController_set_OnAdInAppRequest_m595 (IOSAdMobController_t110 * __this, Action_1_t102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnBannerAdLoaded(System.String)
extern "C" void IOSAdMobController_OnBannerAdLoaded_m596 (IOSAdMobController_t110 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnBannerAdFailedToLoad(System.String)
extern "C" void IOSAdMobController_OnBannerAdFailedToLoad_m597 (IOSAdMobController_t110 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnBannerAdOpened(System.String)
extern "C" void IOSAdMobController_OnBannerAdOpened_m598 (IOSAdMobController_t110 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnBannerAdClosed(System.String)
extern "C" void IOSAdMobController_OnBannerAdClosed_m599 (IOSAdMobController_t110 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnBannerAdLeftApplication(System.String)
extern "C" void IOSAdMobController_OnBannerAdLeftApplication_m600 (IOSAdMobController_t110 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnInterstitialAdLoaded()
extern "C" void IOSAdMobController_OnInterstitialAdLoaded_m601 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnInterstitialAdFailedToLoad()
extern "C" void IOSAdMobController_OnInterstitialAdFailedToLoad_m602 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnInterstitialAdOpened()
extern "C" void IOSAdMobController_OnInterstitialAdOpened_m603 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnInterstitialAdClosed()
extern "C" void IOSAdMobController_OnInterstitialAdClosed_m604 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnInterstitialAdLeftApplication()
extern "C" void IOSAdMobController_OnInterstitialAdLeftApplication_m605 (IOSAdMobController_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::OnInAppPurchaseRequested(System.String)
extern "C" void IOSAdMobController_OnInAppPurchaseRequested_m606 (IOSAdMobController_t110 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::<_OnInterstitialLoaded>m__B()
extern "C" void IOSAdMobController_U3C_OnInterstitialLoadedU3Em__B_m607 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::<_OnInterstitialFailedLoading>m__C()
extern "C" void IOSAdMobController_U3C_OnInterstitialFailedLoadingU3Em__C_m608 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::<_OnInterstitialOpened>m__D()
extern "C" void IOSAdMobController_U3C_OnInterstitialOpenedU3Em__D_m609 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::<_OnInterstitialClosed>m__E()
extern "C" void IOSAdMobController_U3C_OnInterstitialClosedU3Em__E_m610 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::<_OnInterstitialLeftApplication>m__F()
extern "C" void IOSAdMobController_U3C_OnInterstitialLeftApplicationU3Em__F_m611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSAdMobController::<_OnAdInAppRequest>m__10(System.String)
extern "C" void IOSAdMobController_U3C_OnAdInAppRequestU3Em__10_m612 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
