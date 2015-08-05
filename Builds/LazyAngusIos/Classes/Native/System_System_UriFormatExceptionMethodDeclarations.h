#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UriFormatException
struct UriFormatException_t3248;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UriFormatException::.ctor()
extern "C" void UriFormatException__ctor_m14774 (UriFormatException_t3248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::.ctor(System.String)
extern "C" void UriFormatException__ctor_m14775 (UriFormatException_t3248 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException__ctor_m14776 (UriFormatException_t3248 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m14777 (UriFormatException_t3248 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
