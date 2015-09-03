#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t5170;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t5172;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m22861 (ObjRefSurrogate_t5170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ObjRefSurrogate_GetObjectData_m22862 (ObjRefSurrogate_t5170 * __this, Object_t * ___obj, SerializationInfo_t2936 * ___si, StreamingContext_t2937  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m22863 (ObjRefSurrogate_t5170 * __this, Object_t * ___obj, SerializationInfo_t2936 * ___si, StreamingContext_t2937  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
