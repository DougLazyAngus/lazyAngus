#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ProtocolViolationException
struct ProtocolViolationException_t2052;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1301;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.ProtocolViolationException::.ctor()
extern "C" void ProtocolViolationException__ctor_m10550 (ProtocolViolationException_t2052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern "C" void ProtocolViolationException__ctor_m10551 (ProtocolViolationException_t2052 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException__ctor_m10552 (ProtocolViolationException_t2052 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m10553 (ProtocolViolationException_t2052 * __this, SerializationInfo_t1301 * ___info, StreamingContext_t1302  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_GetObjectData_m10554 (ProtocolViolationException_t2052 * __this, SerializationInfo_t1301 * ___serializationInfo, StreamingContext_t1302  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
