#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MemberAccessException
struct MemberAccessException_t4765;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MemberAccessException::.ctor()
extern "C" void MemberAccessException__ctor_m19529 (MemberAccessException_t4765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.String)
extern "C" void MemberAccessException__ctor_m19530 (MemberAccessException_t4765 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberAccessException__ctor_m19531 (MemberAccessException_t4765 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
