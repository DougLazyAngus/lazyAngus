#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t2775;
struct WebCamDevice_t2775_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m9534 (WebCamDevice_t2775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m9535 (WebCamDevice_t2775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t2775_marshal(const WebCamDevice_t2775& unmarshaled, WebCamDevice_t2775_marshaled& marshaled);
void WebCamDevice_t2775_marshal_back(const WebCamDevice_t2775_marshaled& marshaled, WebCamDevice_t2775& unmarshaled);
void WebCamDevice_t2775_marshal_cleanup(WebCamDevice_t2775_marshaled& marshaled);
