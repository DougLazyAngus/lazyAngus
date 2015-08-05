#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AN_GoogleAdProxy
struct AN_GoogleAdProxy_t162;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t637;

// System.Void AN_GoogleAdProxy::.ctor()
extern "C" void AN_GoogleAdProxy__ctor_m1033 (AN_GoogleAdProxy_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::CallActivityFunction(System.String,System.Object[])
extern "C" void AN_GoogleAdProxy_CallActivityFunction_m1034 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t637* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::InitMobileAd(System.String)
extern "C" void AN_GoogleAdProxy_InitMobileAd_m1035 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::ChangeBannersUnitID(System.String)
extern "C" void AN_GoogleAdProxy_ChangeBannersUnitID_m1036 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::ChangeInterstisialsUnitID(System.String)
extern "C" void AN_GoogleAdProxy_ChangeInterstisialsUnitID_m1037 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::CreateBannerAd(System.Int32,System.Int32,System.Int32)
extern "C" void AN_GoogleAdProxy_CreateBannerAd_m1038 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::CreateBannerAdPos(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void AN_GoogleAdProxy_CreateBannerAdPos_m1039 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___size, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::SetBannerPosition(System.Int32,System.Int32)
extern "C" void AN_GoogleAdProxy_SetBannerPosition_m1040 (Object_t * __this /* static, unused */, int32_t ___gravity, int32_t ___bannerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::SetBannerPosition(System.Int32,System.Int32,System.Int32)
extern "C" void AN_GoogleAdProxy_SetBannerPosition_m1041 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___bannerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::HideAd(System.Int32)
extern "C" void AN_GoogleAdProxy_HideAd_m1042 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::ShowAd(System.Int32)
extern "C" void AN_GoogleAdProxy_ShowAd_m1043 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::RefreshAd(System.Int32)
extern "C" void AN_GoogleAdProxy_RefreshAd_m1044 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::DestroyBanner(System.Int32)
extern "C" void AN_GoogleAdProxy_DestroyBanner_m1045 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::StartInterstitialAd()
extern "C" void AN_GoogleAdProxy_StartInterstitialAd_m1046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::LoadInterstitialAd()
extern "C" void AN_GoogleAdProxy_LoadInterstitialAd_m1047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::ShowInterstitialAd()
extern "C" void AN_GoogleAdProxy_ShowInterstitialAd_m1048 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::RecordInAppResolution(System.Int32)
extern "C" void AN_GoogleAdProxy_RecordInAppResolution_m1049 (Object_t * __this /* static, unused */, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::AddKeyword(System.String)
extern "C" void AN_GoogleAdProxy_AddKeyword_m1050 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::SetBirthday(System.Int32,System.Int32,System.Int32)
extern "C" void AN_GoogleAdProxy_SetBirthday_m1051 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::TagForChildDirectedTreatment(System.Boolean)
extern "C" void AN_GoogleAdProxy_TagForChildDirectedTreatment_m1052 (Object_t * __this /* static, unused */, bool ___tagForChildDirectedTreatment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::AddTestDevice(System.String)
extern "C" void AN_GoogleAdProxy_AddTestDevice_m1053 (Object_t * __this /* static, unused */, String_t* ___deviceId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::AddTestDevices(System.String)
extern "C" void AN_GoogleAdProxy_AddTestDevices_m1054 (Object_t * __this /* static, unused */, String_t* ___cvsDeviceIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AN_GoogleAdProxy::SetGender(System.Int32)
extern "C" void AN_GoogleAdProxy_SetGender_m1055 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
