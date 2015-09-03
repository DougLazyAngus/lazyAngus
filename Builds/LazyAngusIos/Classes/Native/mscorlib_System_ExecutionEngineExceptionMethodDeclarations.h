#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ExecutionEngineException
struct ExecutionEngineException_t4882;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ExecutionEngineException::.ctor()
extern "C" void ExecutionEngineException__ctor_m20412 (ExecutionEngineException_t4882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.String)
extern "C" void ExecutionEngineException__ctor_m20413 (ExecutionEngineException_t4882 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ExecutionEngineException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionEngineException__ctor_m20414 (ExecutionEngineException_t4882 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
