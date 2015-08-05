#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.SynchronizationLockException
struct SynchronizationLockException_t3328;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2871;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.SynchronizationLockException::.ctor()
extern "C" void SynchronizationLockException__ctor_m19019 (SynchronizationLockException_t3328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationLockException::.ctor(System.String)
extern "C" void SynchronizationLockException__ctor_m11584 (SynchronizationLockException_t3328 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SynchronizationLockException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SynchronizationLockException__ctor_m19020 (SynchronizationLockException_t3328 * __this, SerializationInfo_t2871 * ___info, StreamingContext_t2872  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
