#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeInitializationException
struct TypeInitializationException_t4928;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException__ctor_m20822 (TypeInitializationException_t4928 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TypeInitializationException_GetObjectData_m20823 (TypeInitializationException_t4928 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
