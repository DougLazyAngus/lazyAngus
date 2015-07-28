#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.SystemException
struct SystemException_t3173;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2861;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.SystemException::.ctor()
extern "C" void SystemException__ctor_m11138 (SystemException_t3173 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C" void SystemException__ctor_m11144 (SystemException_t3173 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SystemException__ctor_m11140 (SystemException_t3173 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" void SystemException__ctor_m11139 (SystemException_t3173 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
