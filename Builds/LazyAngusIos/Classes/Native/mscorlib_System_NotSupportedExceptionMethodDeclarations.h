#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NotSupportedException
struct NotSupportedException_t56;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotSupportedException::.ctor()
extern "C" void NotSupportedException__ctor_m397 (NotSupportedException_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" void NotSupportedException__ctor_m10097 (NotSupportedException_t56 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotSupportedException__ctor_m19577 (NotSupportedException_t56 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
