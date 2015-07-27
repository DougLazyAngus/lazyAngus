#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MSPIOSSocialManager
struct MSPIOSSocialManager_t327;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t68;

// System.Void MSPIOSSocialManager::.ctor()
extern "C" void MSPIOSSocialManager__ctor_m1721 (MSPIOSSocialManager_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::.cctor()
extern "C" void MSPIOSSocialManager__cctor_m1722 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_TwPost(System.String)
extern "C" void MSPIOSSocialManager__MSP_TwPost_m1723 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_TwPostWithMedia(System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_TwPostWithMedia_m1724 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_FbPost(System.String)
extern "C" void MSPIOSSocialManager__MSP_FbPost_m1725 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_FbPostWithMedia(System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_FbPostWithMedia_m1726 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_MediaShare(System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_MediaShare_m1727 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::_MSP_SendMail(System.String,System.String,System.String,System.String)
extern "C" void MSPIOSSocialManager__MSP_SendMail_m1728 (Object_t * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::Awake()
extern "C" void MSPIOSSocialManager_Awake_m1729 (MSPIOSSocialManager_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::ShareMedia(System.String)
extern "C" void MSPIOSSocialManager_ShareMedia_m1730 (MSPIOSSocialManager_t327 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::ShareMedia(System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_ShareMedia_m1731 (MSPIOSSocialManager_t327 * __this, String_t* ___text, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::TwitterPost(System.String)
extern "C" void MSPIOSSocialManager_TwitterPost_m1732 (MSPIOSSocialManager_t327 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::TwitterPost(System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_TwitterPost_m1733 (MSPIOSSocialManager_t327 * __this, String_t* ___text, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::FacebookPost(System.String)
extern "C" void MSPIOSSocialManager_FacebookPost_m1734 (MSPIOSSocialManager_t327 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::FacebookPost(System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_FacebookPost_m1735 (MSPIOSSocialManager_t327 * __this, String_t* ___text, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::SendMail(System.String,System.String,System.String)
extern "C" void MSPIOSSocialManager_SendMail_m1736 (MSPIOSSocialManager_t327 * __this, String_t* ___subject, String_t* ___body, String_t* ___recipients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::SendMail(System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C" void MSPIOSSocialManager_SendMail_m1737 (MSPIOSSocialManager_t327 * __this, String_t* ___subject, String_t* ___body, String_t* ___recipients, Texture2D_t68 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MSPIOSSocialManager MSPIOSSocialManager::get_instance()
extern "C" MSPIOSSocialManager_t327 * MSPIOSSocialManager_get_instance_m1738 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnTwitterPostFailed()
extern "C" void MSPIOSSocialManager_OnTwitterPostFailed_m1739 (MSPIOSSocialManager_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnTwitterPostSuccess()
extern "C" void MSPIOSSocialManager_OnTwitterPostSuccess_m1740 (MSPIOSSocialManager_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnFacebookPostFailed()
extern "C" void MSPIOSSocialManager_OnFacebookPostFailed_m1741 (MSPIOSSocialManager_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPIOSSocialManager::OnFacebookPostSuccess()
extern "C" void MSPIOSSocialManager_OnFacebookPostSuccess_m1742 (MSPIOSSocialManager_t327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
