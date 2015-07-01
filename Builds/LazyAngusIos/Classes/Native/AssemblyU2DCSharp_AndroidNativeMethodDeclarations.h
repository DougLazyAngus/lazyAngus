#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidNative
struct AndroidNative_t109;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t485;

// System.Void AndroidNative::.ctor()
extern "C" void AndroidNative__ctor_m579 (AndroidNative_t109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterInit(System.String,System.String)
extern "C" void AndroidNative_TwitterInit_m580 (Object_t * __this /* static, unused */, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::AuthificateUser()
extern "C" void AndroidNative_AuthificateUser_m581 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadUserData()
extern "C" void AndroidNative_LoadUserData_m582 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterPost(System.String)
extern "C" void AndroidNative_TwitterPost_m583 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterPostWithImage(System.String,System.String)
extern "C" void AndroidNative_TwitterPostWithImage_m584 (Object_t * __this /* static, unused */, String_t* ___status, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LogoutFromTwitter()
extern "C" void AndroidNative_LogoutFromTwitter_m585 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::InitCameraAPI(System.String,System.Int32,System.Int32)
extern "C" void AndroidNative_InitCameraAPI_m586 (Object_t * __this /* static, unused */, String_t* ___folderName, int32_t ___maxSize, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::SaveToGalalry(System.String,System.String)
extern "C" void AndroidNative_SaveToGalalry_m587 (Object_t * __this /* static, unused */, String_t* ___ImageData, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetImageFromGallery()
extern "C" void AndroidNative_GetImageFromGallery_m588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetImageFromCamera(System.Boolean)
extern "C" void AndroidNative_GetImageFromCamera_m589 (Object_t * __this /* static, unused */, bool ___bSaveToGallery, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::isPackageInstalled(System.String)
extern "C" void AndroidNative_isPackageInstalled_m590 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::runPackage(System.String)
extern "C" void AndroidNative_runPackage_m591 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadAndroidId()
extern "C" void AndroidNative_LoadAndroidId_m592 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadContacts()
extern "C" void AndroidNative_LoadContacts_m593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadPackageInfo()
extern "C" void AndroidNative_LoadPackageInfo_m594 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetInternalStoragePath()
extern "C" void AndroidNative_GetInternalStoragePath_m595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetExternalStoragePath()
extern "C" void AndroidNative_GetExternalStoragePath_m596 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadLocaleInfo()
extern "C" void AndroidNative_LoadLocaleInfo_m597 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::StartLockTask()
extern "C" void AndroidNative_StartLockTask_m598 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::StopLockTask()
extern "C" void AndroidNative_StopLockTask_m599 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::OpenAppInStore(System.String)
extern "C" void AndroidNative_OpenAppInStore_m600 (Object_t * __this /* static, unused */, String_t* ___appPackageName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::CallUtility(System.String,System.Object[])
extern "C" void AndroidNative_CallUtility_m601 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t485* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::CallAndroidNativeBridge(System.String,System.Object[])
extern "C" void AndroidNative_CallAndroidNativeBridge_m602 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t485* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
