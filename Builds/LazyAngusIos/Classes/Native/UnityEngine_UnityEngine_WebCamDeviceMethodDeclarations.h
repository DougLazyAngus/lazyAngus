#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t1091;
struct WebCamDevice_t1091_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m5945 (WebCamDevice_t1091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m5946 (WebCamDevice_t1091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t1091_marshal(const WebCamDevice_t1091& unmarshaled, WebCamDevice_t1091_marshaled& marshaled);
void WebCamDevice_t1091_marshal_back(const WebCamDevice_t1091_marshaled& marshaled, WebCamDevice_t1091& unmarshaled);
void WebCamDevice_t1091_marshal_cleanup(WebCamDevice_t1091_marshaled& marshaled);
