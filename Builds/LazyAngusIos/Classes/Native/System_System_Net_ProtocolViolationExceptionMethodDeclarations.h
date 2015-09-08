#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ProtocolViolationException
struct ProtocolViolationException_t4387;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2937;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.ProtocolViolationException::.ctor()
extern "C" void ProtocolViolationException__ctor_m16771 (ProtocolViolationException_t4387 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern "C" void ProtocolViolationException__ctor_m16772 (ProtocolViolationException_t4387 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException__ctor_m16773 (ProtocolViolationException_t4387 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m16774 (ProtocolViolationException_t4387 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_GetObjectData_m16775 (ProtocolViolationException_t4387 * __this, SerializationInfo_t2937 * ___serializationInfo, StreamingContext_t2938  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
