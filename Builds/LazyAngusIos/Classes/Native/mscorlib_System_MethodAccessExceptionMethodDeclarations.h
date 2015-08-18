#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MethodAccessException
struct MethodAccessException_t4818;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MethodAccessException::.ctor()
extern "C" void MethodAccessException__ctor_m19804 (MethodAccessException_t4818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MethodAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodAccessException__ctor_m19805 (MethodAccessException_t4818 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
