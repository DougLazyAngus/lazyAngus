#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AndroidNative
struct AndroidNative_t178;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t626;

// System.Void AndroidNative::.ctor()
extern "C" void AndroidNative__ctor_m1210 (AndroidNative_t178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterInit(System.String,System.String)
extern "C" void AndroidNative_TwitterInit_m1211 (Object_t * __this /* static, unused */, String_t* ___consumer_key, String_t* ___consumer_secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::AuthificateUser()
extern "C" void AndroidNative_AuthificateUser_m1212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadUserData()
extern "C" void AndroidNative_LoadUserData_m1213 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterPost(System.String)
extern "C" void AndroidNative_TwitterPost_m1214 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::TwitterPostWithImage(System.String,System.String)
extern "C" void AndroidNative_TwitterPostWithImage_m1215 (Object_t * __this /* static, unused */, String_t* ___status, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LogoutFromTwitter()
extern "C" void AndroidNative_LogoutFromTwitter_m1216 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::InitCameraAPI(System.String,System.Int32,System.Int32)
extern "C" void AndroidNative_InitCameraAPI_m1217 (Object_t * __this /* static, unused */, String_t* ___folderName, int32_t ___maxSize, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::SaveToGalalry(System.String,System.String)
extern "C" void AndroidNative_SaveToGalalry_m1218 (Object_t * __this /* static, unused */, String_t* ___ImageData, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetImageFromGallery()
extern "C" void AndroidNative_GetImageFromGallery_m1219 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetImageFromCamera(System.Boolean)
extern "C" void AndroidNative_GetImageFromCamera_m1220 (Object_t * __this /* static, unused */, bool ___bSaveToGallery, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::isPackageInstalled(System.String)
extern "C" void AndroidNative_isPackageInstalled_m1221 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::runPackage(System.String)
extern "C" void AndroidNative_runPackage_m1222 (Object_t * __this /* static, unused */, String_t* ___packagename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadAndroidId()
extern "C" void AndroidNative_LoadAndroidId_m1223 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadPackagesList()
extern "C" void AndroidNative_LoadPackagesList_m1224 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadNetworkInfo()
extern "C" void AndroidNative_LoadNetworkInfo_m1225 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::OpenSettingsPage(System.String)
extern "C" void AndroidNative_OpenSettingsPage_m1226 (Object_t * __this /* static, unused */, String_t* ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadContacts()
extern "C" void AndroidNative_LoadContacts_m1227 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadPackageInfo()
extern "C" void AndroidNative_LoadPackageInfo_m1228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetInternalStoragePath()
extern "C" void AndroidNative_GetInternalStoragePath_m1229 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::GetExternalStoragePath()
extern "C" void AndroidNative_GetExternalStoragePath_m1230 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::LoadLocaleInfo()
extern "C" void AndroidNative_LoadLocaleInfo_m1231 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::StartLockTask()
extern "C" void AndroidNative_StartLockTask_m1232 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::StopLockTask()
extern "C" void AndroidNative_StopLockTask_m1233 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::OpenAppInStore(System.String)
extern "C" void AndroidNative_OpenAppInStore_m1234 (Object_t * __this /* static, unused */, String_t* ___appPackageName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::CallUtility(System.String,System.Object[])
extern "C" void AndroidNative_CallUtility_m1235 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidNative::CallAndroidNativeBridge(System.String,System.Object[])
extern "C" void AndroidNative_CallAndroidNativeBridge_m1236 (Object_t * __this /* static, unused */, String_t* ___methodName, ObjectU5BU5D_t626* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
