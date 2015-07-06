#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t1068;
struct WebCamDevice_t1068_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m5803 (WebCamDevice_t1068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m5804 (WebCamDevice_t1068 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t1068_marshal(const WebCamDevice_t1068& unmarshaled, WebCamDevice_t1068_marshaled& marshaled);
void WebCamDevice_t1068_marshal_back(const WebCamDevice_t1068_marshaled& marshaled, WebCamDevice_t1068& unmarshaled);
void WebCamDevice_t1068_marshal_cleanup(WebCamDevice_t1068_marshaled& marshaled);
