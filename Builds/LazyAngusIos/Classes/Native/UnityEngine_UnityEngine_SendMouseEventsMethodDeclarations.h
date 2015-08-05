#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SendMouseEvents
struct SendMouseEvents_t2818;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void UnityEngine.SendMouseEvents::.cctor()
extern "C" void SendMouseEvents__cctor_m9700 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern "C" void SendMouseEvents_DoSendMouseEvents_m9701 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" void SendMouseEvents_SendEvents_m9702 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t2815  ___hit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
