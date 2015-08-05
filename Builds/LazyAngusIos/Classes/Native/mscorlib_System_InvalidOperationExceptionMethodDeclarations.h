#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidOperationException
struct InvalidOperationException_t1380;
// System.String
struct String_t;
// System.Exception
struct Exception_t57;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C" void InvalidOperationException__ctor_m11238 (InvalidOperationException_t1380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" void InvalidOperationException__ctor_m7078 (InvalidOperationException_t1380 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" void InvalidOperationException__ctor_m14894 (InvalidOperationException_t1380 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidOperationException__ctor_m14884 (InvalidOperationException_t1380 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
