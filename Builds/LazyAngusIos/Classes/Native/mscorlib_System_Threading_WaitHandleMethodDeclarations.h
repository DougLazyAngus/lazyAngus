#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitHandle
struct WaitHandle_t3263;
// System.Threading.WaitHandle[]
struct WaitHandleU5BU5D_t5442;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.WaitHandle::.ctor()
extern "C" void WaitHandle__ctor_m24461 (WaitHandle_t3263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
extern "C" void WaitHandle__cctor_m24462 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
extern "C" void WaitHandle_System_IDisposable_Dispose_m24463 (WaitHandle_t3263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckArray(System.Threading.WaitHandle[],System.Boolean)
extern "C" void WaitHandle_CheckArray_m24464 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t5442* ___handles, bool ___waitAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny_internal(System.Threading.WaitHandle[],System.Int32,System.Boolean)
extern "C" int32_t WaitHandle_WaitAny_internal_m24465 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t5442* ___handles, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
extern "C" int32_t WaitHandle_WaitAny_m24466 (Object_t * __this /* static, unused */, WaitHandleU5BU5D_t5442* ___waitHandles, TimeSpan_t334  ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
extern "C" IntPtr_t WaitHandle_get_Handle_m24467 (WaitHandle_t3263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
extern "C" void WaitHandle_set_Handle_m24468 (WaitHandle_t3263 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_internal_m24469 (WaitHandle_t3263 * __this, IntPtr_t ___handle, int32_t ___ms, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
extern "C" void WaitHandle_Dispose_m24470 (WaitHandle_t3263 * __this, bool ___explicitDisposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
extern "C" bool WaitHandle_WaitOne_m24471 (WaitHandle_t3263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
extern "C" bool WaitHandle_WaitOne_m24472 (WaitHandle_t3263 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
extern "C" void WaitHandle_CheckDisposed_m24473 (WaitHandle_t3263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
extern "C" void WaitHandle_Finalize_m24474 (WaitHandle_t3263 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
