#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t5043;
// System.Exception
struct Exception_t57;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2940;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m22093 (TargetInvocationException_t5043 * __this, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
extern "C" void TargetInvocationException__ctor_m22094 (TargetInvocationException_t5043 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m22095 (TargetInvocationException_t5043 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
