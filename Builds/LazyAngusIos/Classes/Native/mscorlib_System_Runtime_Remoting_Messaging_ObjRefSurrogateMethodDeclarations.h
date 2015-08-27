﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t4620;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2920;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t4621;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m18354 (ObjRefSurrogate_t4620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m18355 (ObjRefSurrogate_t4620 * __this, Object_t * ___obj, SerializationInfo_t2920 * ___si, StreamingContext_t2921  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
