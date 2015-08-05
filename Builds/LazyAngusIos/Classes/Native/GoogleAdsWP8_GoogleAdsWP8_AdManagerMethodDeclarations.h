#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GoogleAdsWP8.AdManager
struct AdManager_t682;
// System.String
struct String_t;

// System.Void GoogleAdsWP8.AdManager::Init(System.String)
extern "C" void AdManager_Init_m3569 (AdManager_t682 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleAdsWP8.AdManager GoogleAdsWP8.AdManager::get_instance()
extern "C" AdManager_t682 * AdManager_get_instance_m3568 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::EnableForceTesting()
extern "C" void AdManager_EnableForceTesting_m3575 (AdManager_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::ChangeBannersUnitID(System.String)
extern "C" void AdManager_ChangeBannersUnitID_m3571 (AdManager_t682 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::ChangeInterstisialsUnitID(System.String)
extern "C" void AdManager_ChangeInterstisialsUnitID_m3572 (AdManager_t682 * __this, String_t* ___ad_unit_id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::DestroyBanner(System.Int32)
extern "C" void AdManager_DestroyBanner_m3573 (AdManager_t682 * __this, int32_t ___bannerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::AddKeyword(System.String)
extern "C" void AdManager_AddKeyword_m3574 (AdManager_t682 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::SetGender(System.Int32)
extern "C" void AdManager_SetGender_m3576 (AdManager_t682 * __this, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::SetBirthday(System.Int32,System.Int32,System.Int32)
extern "C" void AdManager_SetBirthday_m3577 (AdManager_t682 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::StartInterstitialAd()
extern "C" void AdManager_StartInterstitialAd_m3578 (AdManager_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::LoadInterstitialAd()
extern "C" void AdManager_LoadInterstitialAd_m3579 (AdManager_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::ShowInterstitialAd()
extern "C" void AdManager_ShowInterstitialAd_m3580 (AdManager_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::SetOrientation(System.Int32)
extern "C" void AdManager_SetOrientation_m3570 (AdManager_t682 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleAdsWP8.AdManager::.ctor()
extern "C" void AdManager__ctor_m10173 (AdManager_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
