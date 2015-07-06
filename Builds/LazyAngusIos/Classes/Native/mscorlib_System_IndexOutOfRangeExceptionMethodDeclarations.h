#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1231;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IndexOutOfRangeException::.ctor()
extern "C" void IndexOutOfRangeException__ctor_m15326 (IndexOutOfRangeException_t1231 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" void IndexOutOfRangeException__ctor_m6390 (IndexOutOfRangeException_t1231 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IndexOutOfRangeException__ctor_m15327 (IndexOutOfRangeException_t1231 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
