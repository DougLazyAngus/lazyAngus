#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentNullException
struct ArgumentNullException_t720;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2867;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentNullException::.ctor()
extern "C" void ArgumentNullException__ctor_m7080 (ArgumentNullException_t720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" void ArgumentNullException__ctor_m3814 (ArgumentNullException_t720 * __this, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
extern "C" void ArgumentNullException__ctor_m3820 (ArgumentNullException_t720 * __this, String_t* ___paramName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentNullException__ctor_m19083 (ArgumentNullException_t720 * __this, SerializationInfo_t2867 * ___info, StreamingContext_t2868  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
