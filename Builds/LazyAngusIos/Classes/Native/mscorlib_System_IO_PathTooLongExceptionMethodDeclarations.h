﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.PathTooLongException
struct PathTooLongException_t2384;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.PathTooLongException::.ctor()
extern "C" void PathTooLongException__ctor_m13076 (PathTooLongException_t2384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m13077 (PathTooLongException_t2384 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PathTooLongException__ctor_m13078 (PathTooLongException_t2384 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;