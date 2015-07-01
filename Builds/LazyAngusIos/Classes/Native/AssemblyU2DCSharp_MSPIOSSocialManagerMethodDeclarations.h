#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MSPIOSSocialManager
struct MSPIOSSocialManager_t299;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void MSPIOSSocialManager::.ctor()
extern "C" void MSPIOSSocialManager__ctor_m1319 (MSPIOSSocialManager_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::.cctor()
extern "C" void MSPIOSSocialManager__cctor_m1320 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_TwPost(System.String)
extern "C" void MSPIOSSocialManager__MSP_TwPost_m1321 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_TwPostWithMedia(System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_TwPostWithMedia_m1322 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_FbPost(System.String)
extern "C" void MSPIOSSocialManager__MSP_FbPost_m1323 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_FbPostWithMedia(System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_FbPostWithMedia_m1324 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_MediaShare(System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_MediaShare_m1325 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_SendMail(System.String,System.String,System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_SendMail_m1326 (Object_t * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::Awake()
extern "C" void MSPIOSSocialManager_Awake_m1327 (MSPIOSSocialManager_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::ShareMedia(System.String)
extern "C" void MSPIOSSocialManager_ShareMedia_m1328 (MSPIOSSocialManager_t299 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::ShareMedia(System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_ShareMedia_m1329 (MSPIOSSocialManager_t299 * __this, String_t* ___text, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::TwitterPost(System.String)
extern "C" void MSPIOSSocialManager_TwitterPost_m1330 (MSPIOSSocialManager_t299 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::TwitterPost(System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_TwitterPost_m1331 (MSPIOSSocialManager_t299 * __this, String_t* ___text, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::FacebookPost(System.String)
extern "C" void MSPIOSSocialManager_FacebookPost_m1332 (MSPIOSSocialManager_t299 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::FacebookPost(System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_FacebookPost_m1333 (MSPIOSSocialManager_t299 * __this, String_t* ___text, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::SendMail(System.String,System.String,System.String)
extern "C" void MSPIOSSocialManager_SendMail_m1334 (MSPIOSSocialManager_t299 * __this, String_t* ___subject, String_t* ___body, String_t* ___recipients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::SendMail(System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_SendMail_m1335 (MSPIOSSocialManager_t299 * __this, String_t* ___subject, String_t* ___body, String_t* ___recipients, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MSPIOSSocialManager MSPIOSSocialManager::get_instance()
extern "C" MSPIOSSocialManager_t299 * MSPIOSSocialManager_get_instance_m1336 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnTwitterPostFailed()
extern "C" void MSPIOSSocialManager_OnTwitterPostFailed_m1337 (MSPIOSSocialManager_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnTwitterPostSuccess()
extern "C" void MSPIOSSocialManager_OnTwitterPostSuccess_m1338 (MSPIOSSocialManager_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnFacebookPostFailed()
extern "C" void MSPIOSSocialManager_OnFacebookPostFailed_m1339 (MSPIOSSocialManager_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnFacebookPostSuccess()
extern "C" void MSPIOSSocialManager_OnFacebookPostSuccess_m1340 (MSPIOSSocialManager_t299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
