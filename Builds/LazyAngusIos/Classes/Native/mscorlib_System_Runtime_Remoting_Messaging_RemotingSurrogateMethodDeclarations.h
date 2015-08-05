#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t4574;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t4576;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m18089 (RemotingSurrogate_t4574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * RemotingSurrogate_SetObjectData_m18090 (RemotingSurrogate_t4574 * __this, Object_t * ___obj, SerializationInfo_t2871 * ___si, StreamingContext_t2872  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
