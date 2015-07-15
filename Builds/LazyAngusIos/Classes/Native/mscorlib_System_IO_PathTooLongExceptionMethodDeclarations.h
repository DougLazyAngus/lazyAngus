#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.PathTooLongException
struct PathTooLongException_t2409;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.PathTooLongException::.ctor()
extern "C" void PathTooLongException__ctor_m13256 (PathTooLongException_t2409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m13257 (PathTooLongException_t2409 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PathTooLongException__ctor_m13258 (PathTooLongException_t2409 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
