﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t2513;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t2562;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2512;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m13931 (RemotingSurrogateSelector_t2513 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern "C" void RemotingSurrogateSelector__cctor_m13932 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m13933 (RemotingSurrogateSelector_t2513 * __this, Type_t * ___type, StreamingContext_t1221  ___context, Object_t ** ___ssout, const MethodInfo* method) IL2CPP_METHOD_ATTR;