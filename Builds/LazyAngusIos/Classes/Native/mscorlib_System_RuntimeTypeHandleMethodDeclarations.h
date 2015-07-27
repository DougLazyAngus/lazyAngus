#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t2312;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1300;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeTypeHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeTypeHandle__ctor_m12649 (RuntimeTypeHandle_t2312 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C" IntPtr_t RuntimeTypeHandle_get_Value_m12650 (RuntimeTypeHandle_t2312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeTypeHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeTypeHandle_GetObjectData_m12651 (RuntimeTypeHandle_t2312 * __this, SerializationInfo_t1300 * ___info, StreamingContext_t1301  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeTypeHandle::Equals(System.Object)
extern "C" bool RuntimeTypeHandle_Equals_m12652 (RuntimeTypeHandle_t2312 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeTypeHandle::GetHashCode()
extern "C" int32_t RuntimeTypeHandle_GetHashCode_m12653 (RuntimeTypeHandle_t2312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
