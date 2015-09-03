#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.JsBridge
struct JsBridge_t438;
// System.String
struct String_t;

// System.Void Facebook.JsBridge::.ctor()
extern "C" void JsBridge__ctor_m2389 (JsBridge_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::Start()
extern "C" void JsBridge_Start_m2390 (JsBridge_t438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookAuthResponse(System.String)
extern "C" void JsBridge_OnFacebookAuthResponse_m2391 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookAuthResponseChange(System.String)
extern "C" void JsBridge_OnFacebookAuthResponseChange_m2392 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookUiResponse(System.String)
extern "C" void JsBridge_OnFacebookUiResponse_m2393 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnFacebookFocus(System.String)
extern "C" void JsBridge_OnFacebookFocus_m2394 (JsBridge_t438 * __this, String_t* ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnInit(System.String)
extern "C" void JsBridge_OnInit_m2395 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.JsBridge::OnUrlResponse(System.String)
extern "C" void JsBridge_OnUrlResponse_m2396 (JsBridge_t438 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
