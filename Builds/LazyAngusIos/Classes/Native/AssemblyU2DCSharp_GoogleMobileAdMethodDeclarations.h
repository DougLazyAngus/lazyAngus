#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleMobileAd
struct GoogleMobileAd_t105;
// System.String
struct String_t;
// GoogleMobileAdBanner
struct GoogleMobileAdBanner_t100;
// System.String[]
struct StringU5BU5D_t45;
// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t575;
// UnionAssets.FLE.DataEventHandlerFunction
struct DataEventHandlerFunction_t576;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// AndroidMonth
#include "AssemblyU2DCSharp_AndroidMonth.h"
// GoogleGender
#include "AssemblyU2DCSharp_GoogleGender.h"
// GADInAppResolution
#include "AssemblyU2DCSharp_GADInAppResolution.h"

// System.Void GoogleMobileAd::.ctor()
extern "C" void GoogleMobileAd__ctor_m458 (GoogleMobileAd_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::.cctor()
extern "C" void GoogleMobileAd__cctor_m459 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::Init()
extern "C" void GoogleMobileAd_Init_m460 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::SetBannersUnitID(System.String,System.String,System.String)
extern "C" void GoogleMobileAd_SetBannersUnitID_m461 (Object_t * __this /* static, unused */, String_t* ___android_unit_id, String_t* ___ios_unit_id, String_t* ___wp8_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::SetInterstisialsUnitID(System.String,System.String,System.String)
extern "C" void GoogleMobileAd_SetInterstisialsUnitID_m462 (Object_t * __this /* static, unused */, String_t* ___android_unit_id, String_t* ___ios_unit_id, String_t* ___wp8_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner GoogleMobileAd::CreateAdBanner(UnityEngine.TextAnchor,GADBannerSize)
extern "C" Object_t * GoogleMobileAd_CreateAdBanner_m463 (Object_t * __this /* static, unused */, int32_t ___anchor, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner GoogleMobileAd::CreateAdBanner(System.Int32,System.Int32,GADBannerSize)
extern "C" Object_t * GoogleMobileAd_CreateAdBanner_m464 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAdBanner GoogleMobileAd::GetBanner(System.Int32)
extern "C" Object_t * GoogleMobileAd_GetBanner_m465 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::DestroyBanner(System.Int32)
extern "C" void GoogleMobileAd_DestroyBanner_m466 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::AddKeyword(System.String)
extern "C" void GoogleMobileAd_AddKeyword_m467 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::SetBirthday(System.Int32,AndroidMonth,System.Int32)
extern "C" void GoogleMobileAd_SetBirthday_m468 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::TagForChildDirectedTreatment(System.Boolean)
extern "C" void GoogleMobileAd_TagForChildDirectedTreatment_m469 (Object_t * __this /* static, unused */, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::AddTestDevice(System.String)
extern "C" void GoogleMobileAd_AddTestDevice_m470 (Object_t * __this /* static, unused */, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::AddTestDevices(System.String[])
extern "C" void GoogleMobileAd_AddTestDevices_m471 (Object_t * __this /* static, unused */, StringU5BU5D_t45* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::SetGender(GoogleGender)
extern "C" void GoogleMobileAd_SetGender_m472 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::StartInterstitialAd()
extern "C" void GoogleMobileAd_StartInterstitialAd_m473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::LoadInterstitialAd()
extern "C" void GoogleMobileAd_LoadInterstitialAd_m474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::ShowInterstitialAd()
extern "C" void GoogleMobileAd_ShowInterstitialAd_m475 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::RecordInAppResolution(GADInAppResolution)
extern "C" void GoogleMobileAd_RecordInAppResolution_m476 (Object_t * __this /* static, unused */, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAd::get_IsInited()
extern "C" bool GoogleMobileAd_get_IsInited_m477 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAd::get_BannersUunitId()
extern "C" String_t* GoogleMobileAd_get_BannersUunitId_m478 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GoogleMobileAd::get_InterstisialUnitId()
extern "C" String_t* GoogleMobileAd_get_InterstisialUnitId_m479 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::OnInterstitialLoadedListner()
extern "C" void GoogleMobileAd_OnInterstitialLoadedListner_m480 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::OnInterstitialFailedLoadingListner()
extern "C" void GoogleMobileAd_OnInterstitialFailedLoadingListner_m481 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::OnInterstitialOpenedListner()
extern "C" void GoogleMobileAd_OnInterstitialOpenedListner_m482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::OnInterstitialClosedListner()
extern "C" void GoogleMobileAd_OnInterstitialClosedListner_m483 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::OnInterstitialLeftApplicationListner()
extern "C" void GoogleMobileAd_OnInterstitialLeftApplicationListner_m484 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::OnAdInAppRequestListner(System.String)
extern "C" void GoogleMobileAd_OnAdInAppRequestListner_m485 (Object_t * __this /* static, unused */, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void GoogleMobileAd_addEventListener_m486 (Object_t * __this /* static, unused */, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::addEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void GoogleMobileAd_addEventListener_m487 (Object_t * __this /* static, unused */, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::removeEventListener(System.String,UnionAssets.FLE.EventHandlerFunction)
extern "C" void GoogleMobileAd_removeEventListener_m488 (Object_t * __this /* static, unused */, String_t* ___eventName, EventHandlerFunction_t575 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::removeEventListener(System.String,UnionAssets.FLE.DataEventHandlerFunction)
extern "C" void GoogleMobileAd_removeEventListener_m489 (Object_t * __this /* static, unused */, String_t* ___eventName, DataEventHandlerFunction_t576 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::<OnInterstitialLoaded>m__0()
extern "C" void GoogleMobileAd_U3COnInterstitialLoadedU3Em__0_m490 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::<OnInterstitialFailedLoading>m__1()
extern "C" void GoogleMobileAd_U3COnInterstitialFailedLoadingU3Em__1_m491 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::<OnInterstitialOpened>m__2()
extern "C" void GoogleMobileAd_U3COnInterstitialOpenedU3Em__2_m492 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::<OnInterstitialClosed>m__3()
extern "C" void GoogleMobileAd_U3COnInterstitialClosedU3Em__3_m493 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::<OnInterstitialLeftApplication>m__4()
extern "C" void GoogleMobileAd_U3COnInterstitialLeftApplicationU3Em__4_m494 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAd::<OnAdInAppRequest>m__5(System.String)
extern "C" void GoogleMobileAd_U3COnAdInAppRequestU3Em__5_m495 (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
