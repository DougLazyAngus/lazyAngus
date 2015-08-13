#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OutOfMemoryException
struct OutOfMemoryException_t4831;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OutOfMemoryException::.ctor()
extern "C" void OutOfMemoryException__ctor_m20007 (OutOfMemoryException_t4831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OutOfMemoryException__ctor_m20008 (OutOfMemoryException_t4831 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
