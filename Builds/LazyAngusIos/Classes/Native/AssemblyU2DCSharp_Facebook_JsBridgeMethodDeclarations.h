#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.JsBridge
struct JsBridge_t398;
// System.String
struct String_t;

// System.Void Facebook.JsBridge::.ctor()
extern "C" void JsBridge__ctor_m2116 (JsBridge_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::Start()
extern "C" void JsBridge_Start_m2117 (JsBridge_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookAuthResponse(System.String)
extern "C" void JsBridge_OnFacebookAuthResponse_m2118 (JsBridge_t398 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookAuthResponseChange(System.String)
extern "C" void JsBridge_OnFacebookAuthResponseChange_m2119 (JsBridge_t398 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookUiResponse(System.String)
extern "C" void JsBridge_OnFacebookUiResponse_m2120 (JsBridge_t398 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookFocus(System.String)
extern "C" void JsBridge_OnFacebookFocus_m2121 (JsBridge_t398 * __this, String_t* ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnInit(System.String)
extern "C" void JsBridge_OnInit_m2122 (JsBridge_t398 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnUrlResponse(System.String)
extern "C" void JsBridge_OnUrlResponse_m2123 (JsBridge_t398 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
