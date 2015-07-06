#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t593;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1220;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.PlatformNotSupportedException::.ctor()
extern "C" void PlatformNotSupportedException__ctor_m15551 (PlatformNotSupportedException_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.PlatformNotSupportedException::.ctor(System.String)
extern "C" void PlatformNotSupportedException__ctor_m2787 (PlatformNotSupportedException_t593 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.PlatformNotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void PlatformNotSupportedException__ctor_m15552 (PlatformNotSupportedException_t593 * __this, SerializationInfo_t1220 * ___info, StreamingContext_t1221  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
