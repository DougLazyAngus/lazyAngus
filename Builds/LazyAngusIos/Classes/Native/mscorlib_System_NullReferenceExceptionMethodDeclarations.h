#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NullReferenceException
struct NullReferenceException_t664;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1299;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NullReferenceException::.ctor()
extern "C" void NullReferenceException__ctor_m8538 (NullReferenceException_t664 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C" void NullReferenceException__ctor_m3454 (NullReferenceException_t664 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NullReferenceException__ctor_m16194 (NullReferenceException_t664 * __this, SerializationInfo_t1299 * ___info, StreamingContext_t1300  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
