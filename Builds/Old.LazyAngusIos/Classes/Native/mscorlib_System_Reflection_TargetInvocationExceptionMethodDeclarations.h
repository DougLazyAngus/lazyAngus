﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t2473;
// System.Exception
struct Exception_t27;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1247;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m13903 (TargetInvocationException_t2473 * __this, Exception_t27 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m13904 (TargetInvocationException_t2473 * __this, SerializationInfo_t1247 * ___info, StreamingContext_t1248  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;