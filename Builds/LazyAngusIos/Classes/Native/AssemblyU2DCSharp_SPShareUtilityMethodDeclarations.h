#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPShareUtility
struct SPShareUtility_t363;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t108;

// System.Void SPShareUtility::.ctor()
extern "C" void SPShareUtility__ctor_m1935 (SPShareUtility_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::TwitterShare(System.String)
extern "C" void SPShareUtility_TwitterShare_m1936 (Object_t * __this /* static, unused */, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::TwitterShare(System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_TwitterShare_m1937 (Object_t * __this /* static, unused */, String_t* ___status, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::FacebookShare(System.String)
extern "C" void SPShareUtility_FacebookShare_m1938 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::FacebookShare(System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_FacebookShare_m1939 (Object_t * __this /* static, unused */, String_t* ___message, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::ShareMedia(System.String,System.String)
extern "C" void SPShareUtility_ShareMedia_m1940 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::ShareMedia(System.String,System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_ShareMedia_m1941 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::SendMail(System.String,System.String,System.String)
extern "C" void SPShareUtility_SendMail_m1942 (Object_t * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPShareUtility::SendMail(System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C" void SPShareUtility_SendMail_m1943 (Object_t * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, Texture2D_t108 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
