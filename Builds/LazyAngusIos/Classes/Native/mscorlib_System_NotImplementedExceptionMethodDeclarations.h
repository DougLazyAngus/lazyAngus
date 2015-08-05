#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NotImplementedException
struct NotImplementedException_t1390;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2870;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotImplementedException::.ctor()
extern "C" void NotImplementedException__ctor_m7125 (NotImplementedException_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" void NotImplementedException__ctor_m7190 (NotImplementedException_t1390 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotImplementedException__ctor_m19646 (NotImplementedException_t1390 * __this, SerializationInfo_t2870 * ___info, StreamingContext_t2871  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
