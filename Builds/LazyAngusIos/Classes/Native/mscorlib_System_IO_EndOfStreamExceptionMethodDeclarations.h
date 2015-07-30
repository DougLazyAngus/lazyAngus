#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.EndOfStreamException
struct EndOfStreamException_t4433;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.EndOfStreamException::.ctor()
extern "C" void EndOfStreamException__ctor_m17081 (EndOfStreamException_t4433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.EndOfStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void EndOfStreamException__ctor_m17082 (EndOfStreamException_t4433 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
