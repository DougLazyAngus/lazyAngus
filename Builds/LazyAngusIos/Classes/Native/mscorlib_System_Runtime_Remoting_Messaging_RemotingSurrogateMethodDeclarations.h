#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t4570;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t4572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m18058 (RemotingSurrogate_t4570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * RemotingSurrogate_SetObjectData_m18059 (RemotingSurrogate_t4570 * __this, Object_t * ___obj, SerializationInfo_t2867 * ___si, StreamingContext_t2868  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
