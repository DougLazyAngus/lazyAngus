﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidCastException
struct InvalidCastException_t2788;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidCastException::.ctor()
extern "C" void InvalidCastException__ctor_m16090 (InvalidCastException_t2788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" void InvalidCastException__ctor_m16091 (InvalidCastException_t2788 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidCastException__ctor_m16092 (InvalidCastException_t2788 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
