#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ProtocolViolationException
struct ProtocolViolationException_t4080;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.ProtocolViolationException::.ctor()
extern "C" void ProtocolViolationException__ctor_m14240 (ProtocolViolationException_t4080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern "C" void ProtocolViolationException__ctor_m14241 (ProtocolViolationException_t4080 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException__ctor_m14242 (ProtocolViolationException_t4080 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m14243 (ProtocolViolationException_t4080 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_GetObjectData_m14244 (ProtocolViolationException_t4080 * __this, SerializationInfo_t2936 * ___serializationInfo, StreamingContext_t2937  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
