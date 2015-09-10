#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Channels.ChannelServices
struct ChannelServices_t5150;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t5435;
// System.Object[]
struct ObjectU5BU5D_t707;

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern "C" void ChannelServices__cctor_m22740 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern "C" void ChannelServices_RegisterChannel_m22741 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C" void ChannelServices_RegisterChannel_m22742 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C" ObjectU5BU5D_t707* ChannelServices_GetCurrentChannelInfo_m22743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
