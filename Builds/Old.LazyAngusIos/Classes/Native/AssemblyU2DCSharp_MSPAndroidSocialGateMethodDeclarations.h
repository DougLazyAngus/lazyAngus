#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MSPAndroidSocialGate
struct MSPAndroidSocialGate_t292;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t65;

// System.Void MSPAndroidSocialGate::.ctor()
extern "C" void MSPAndroidSocialGate__ctor_m1249 (MSPAndroidSocialGate_t292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPAndroidSocialGate::StartShareIntent(System.String,System.String,System.String)
extern "C" void MSPAndroidSocialGate_StartShareIntent_m1250 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___packageNamePattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPAndroidSocialGate::StartShareIntentWithSubject(System.String,System.String,System.String,System.String)
extern "C" void MSPAndroidSocialGate_StartShareIntentWithSubject_m1251 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___packageNamePattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPAndroidSocialGate::StartShareIntent(System.String,System.String,UnityEngine.Texture2D,System.String)
extern "C" void MSPAndroidSocialGate_StartShareIntent_m1252 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, Texture2D_t65 * ___texture, String_t* ___packageNamePattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPAndroidSocialGate::StartShareIntentWithSubject(System.String,System.String,System.String,UnityEngine.Texture2D,System.String)
extern "C" void MSPAndroidSocialGate_StartShareIntentWithSubject_m1253 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, Texture2D_t65 * ___texture, String_t* ___packageNamePattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MSPAndroidSocialGate::SendMail(System.String,System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C" void MSPAndroidSocialGate_SendMail_m1254 (Object_t * __this /* static, unused */, String_t* ___caption, String_t* ___message, String_t* ___subject, String_t* ___recipients, Texture2D_t65 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
