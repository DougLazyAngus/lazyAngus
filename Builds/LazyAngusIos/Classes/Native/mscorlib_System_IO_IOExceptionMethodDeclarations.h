#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IOException
struct IOException_t1707;
// System.String
struct String_t;
// System.Exception
struct Exception_t27;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IOException::.ctor()
extern "C" void IOException__ctor_m13013 (IOException_t1707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
extern "C" void IOException__ctor_m8546 (IOException_t1707 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C" void IOException__ctor_m8556 (IOException_t1707 * __this, String_t* ___message, Exception_t27 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IOException__ctor_m13014 (IOException_t1707 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
extern "C" void IOException__ctor_m13015 (IOException_t1707 * __this, String_t* ___message, int32_t ___hresult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
