#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidNative
struct AndroidNative_t136;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t581;

// System.Void AndroidNative::.ctor()
extern "C" void AndroidNative__ctor_m937 (AndroidNative_t136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterInit(System.String,System.String)
extern "C" void AndroidNative_TwitterInit_m938 (Object_t * __this /* static, unused */, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::AuthificateUser()
extern "C" void AndroidNative_AuthificateUser_m939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadUserData()
extern "C" void AndroidNative_LoadUserData_m940 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterPost(System.String)
extern "C" void AndroidNative_TwitterPost_m941 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterPostWithImage(System.String,System.String)
extern "C" void AndroidNative_TwitterPostWithImage_m942 (Object_t * __this /* static, unused */, String_t* ___status, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LogoutFromTwitter()
extern "C" void AndroidNative_LogoutFromTwitter_m943 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::InitCameraAPI(System.String,System.Int32,System.Int32)
extern "C" void AndroidNative_InitCameraAPI_m944 (Object_t * __this /* static, unused */, String_t* ___folderName, int32_t ___maxSize, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::SaveToGalalry(System.String,System.String)
extern "C" void AndroidNative_SaveToGalalry_m945 (Object_t * __this /* static, unused */, String_t* ___ImageData, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetImageFromGallery()
extern "C" void AndroidNative_GetImageFromGallery_m946 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetImageFromCamera(System.Boolean)
extern "C" void AndroidNative_GetImageFromCamera_m947 (Object_t * __this /* static, unused */, bool ___bSaveToGallery, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::isPackageInstalled(System.String)
extern "C" void AndroidNative_isPackageInstalled_m948 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::runPackage(System.String)
extern "C" void AndroidNative_runPackage_m949 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadAndroidId()
extern "C" void AndroidNative_LoadAndroidId_m950 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadPackagesList()
extern "C" void AndroidNative_LoadPackagesList_m951 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadNetworkInfo()
extern "C" void AndroidNative_LoadNetworkInfo_m952 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::OpenSettingsPage(System.String)
extern "C" void AndroidNative_OpenSettingsPage_m953 (Object_t * __this /* static, unused */, String_t* ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadContacts()
extern "C" void AndroidNative_LoadContacts_m954 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadPackageInfo()
extern "C" void AndroidNative_LoadPackageInfo_m955 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetInternalStoragePath()
extern "C" void AndroidNative_GetInternalStoragePath_m956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetExternalStoragePath()
extern "C" void AndroidNative_GetExternalStoragePath_m957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadLocaleInfo()
extern "C" void AndroidNative_LoadLocaleInfo_m958 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::StartLockTask()
extern "C" void AndroidNative_StartLockTask_m959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::StopLockTask()
extern "C" void AndroidNative_StopLockTask_m960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::OpenAppInStore(System.String)
extern "C" void AndroidNative_OpenAppInStore_m961 (Object_t * __this /* static, unused */, String_t* ___appPackageName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::CallUtility(System.String,System.Object[])
extern "C" void AndroidNative_CallUtility_m962 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::CallAndroidNativeBridge(System.String,System.Object[])
extern "C" void AndroidNative_CallAndroidNativeBridge_m963 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t581* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
