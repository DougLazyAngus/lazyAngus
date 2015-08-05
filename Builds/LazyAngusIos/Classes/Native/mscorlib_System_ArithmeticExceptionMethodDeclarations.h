#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArithmeticException
struct ArithmeticException_t3868;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArithmeticException::.ctor()
extern "C" void ArithmeticException__ctor_m19119 (ArithmeticException_t3868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.String)
extern "C" void ArithmeticException__ctor_m12883 (ArithmeticException_t3868 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArithmeticException__ctor_m19120 (ArithmeticException_t3868 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
