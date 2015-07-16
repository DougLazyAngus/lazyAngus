#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPShareUtility
struct SPShareUtility_t295;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void SPShareUtility::.ctor()
extern "C" void SPShareUtility__ctor_m1262 (SPShareUtility_t295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::TwitterShare(System.String)
extern "C" void SPShareUtility_TwitterShare_m1263 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::TwitterShare(System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_TwitterShare_m1264 (Object_t * __this /* static, unused */, String_t* ___status, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::FacebookShare(System.String)
extern "C" void SPShareUtility_FacebookShare_m1265 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::FacebookShare(System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_FacebookShare_m1266 (Object_t * __this /* static, unused */, String_t* ___message, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::ShareMedia(System.String,System.String)
extern "C" void SPShareUtility_ShareMedia_m1267 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::ShareMedia(System.String,System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_ShareMedia_m1268 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::SendMail(System.String,System.String,System.String)
extern "C" void SPShareUtility_SendMail_m1269 (Object_t * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::SendMail(System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_SendMail_m1270 (Object_t * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
