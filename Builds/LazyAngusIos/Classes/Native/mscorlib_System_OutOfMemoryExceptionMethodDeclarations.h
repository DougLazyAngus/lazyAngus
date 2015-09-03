#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OutOfMemoryException
struct OutOfMemoryException_t4903;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2936;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OutOfMemoryException::.ctor()
extern "C" void OutOfMemoryException__ctor_m20677 (OutOfMemoryException_t4903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.String)
extern "C" void OutOfMemoryException__ctor_m20678 (OutOfMemoryException_t4903 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OutOfMemoryException__ctor_m20679 (OutOfMemoryException_t4903 * __this, SerializationInfo_t2936 * ___info, StreamingContext_t2937  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
