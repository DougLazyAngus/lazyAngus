#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.LockRecursionException
struct LockRecursionException_t3349;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2919;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.LockRecursionException::.ctor()
extern "C" void LockRecursionException__ctor_m11733 (LockRecursionException_t3349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.String)
extern "C" void LockRecursionException__ctor_m11734 (LockRecursionException_t3349 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.LockRecursionException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LockRecursionException__ctor_m11735 (LockRecursionException_t3349 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
