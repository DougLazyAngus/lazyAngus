#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.EndOfStreamException
struct EndOfStreamException_t4426;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.EndOfStreamException::.ctor()
extern "C" void EndOfStreamException__ctor_m17034 (EndOfStreamException_t4426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.EndOfStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void EndOfStreamException__ctor_m17035 (EndOfStreamException_t4426 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
