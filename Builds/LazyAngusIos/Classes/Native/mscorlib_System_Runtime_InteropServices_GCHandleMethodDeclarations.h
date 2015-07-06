#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t1440;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"

// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.IntPtr)
extern "C" void GCHandle__ctor_m13737 (GCHandle_t1440 * __this, IntPtr_t ___h, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object)
extern "C" void GCHandle__ctor_m13738 (GCHandle_t1440 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m13739 (GCHandle_t1440 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m8536 (GCHandle_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C" Object_t * GCHandle_get_Target_m8540 (GCHandle_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C" GCHandle_t1440  GCHandle_Alloc_m8533 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t1440  GCHandle_Alloc_m13740 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m8537 (GCHandle_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)
extern "C" bool GCHandle_CheckCurrentDomain_m13741 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m13742 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m13743 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m13744 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern "C" bool GCHandle_Equals_m13745 (GCHandle_t1440 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C" int32_t GCHandle_GetHashCode_m13746 (GCHandle_t1440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C" GCHandle_t1440  GCHandle_FromIntPtr_m8539 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C" IntPtr_t GCHandle_ToIntPtr_m8534 (Object_t * __this /* static, unused */, GCHandle_t1440  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
extern "C" IntPtr_t GCHandle_op_Explicit_m13747 (Object_t * __this /* static, unused */, GCHandle_t1440  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
extern "C" GCHandle_t1440  GCHandle_op_Explicit_m13748 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
