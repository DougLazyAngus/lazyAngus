#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.EndOfStreamException
struct EndOfStreamException_t4992;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2947;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.EndOfStreamException::.ctor()
extern "C" void EndOfStreamException__ctor_m21540 (EndOfStreamException_t4992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.EndOfStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void EndOfStreamException__ctor_m21541 (EndOfStreamException_t4992 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
