#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.FormatException
struct FormatException_t2952;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.FormatException::.ctor()
extern "C" void FormatException__ctor_m14779 (FormatException_t2952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C" void FormatException__ctor_m10290 (FormatException_t2952 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String,System.Exception)
extern "C" void FormatException__ctor_m18056 (FormatException_t2952 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FormatException__ctor_m18106 (FormatException_t2952 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
