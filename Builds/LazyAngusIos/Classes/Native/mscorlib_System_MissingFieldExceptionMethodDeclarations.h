#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingFieldException
struct MissingFieldException_t4895;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingFieldException::.ctor()
extern "C" void MissingFieldException__ctor_m20490 (MissingFieldException_t4895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.String)
extern "C" void MissingFieldException__ctor_m20491 (MissingFieldException_t4895 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingFieldException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingFieldException__ctor_m20492 (MissingFieldException_t4895 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingFieldException::get_Message()
extern "C" String_t* MissingFieldException_get_Message_m20493 (MissingFieldException_t4895 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
