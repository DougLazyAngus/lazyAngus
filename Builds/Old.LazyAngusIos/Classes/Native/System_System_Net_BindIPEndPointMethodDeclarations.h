#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t1569;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t1548;
// System.Net.ServicePoint
struct ServicePoint_t1544;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C" void BindIPEndPoint__ctor_m8666 (BindIPEndPoint_t1569 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C" IPEndPoint_t1548 * BindIPEndPoint_Invoke_m8667 (BindIPEndPoint_t1569 * __this, ServicePoint_t1544 * ___servicePoint, IPEndPoint_t1548 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t1548 * pinvoke_delegate_wrapper_BindIPEndPoint_t1569(Il2CppObject* delegate, ServicePoint_t1544 * ___servicePoint, IPEndPoint_t1548 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * BindIPEndPoint_BeginInvoke_m8668 (BindIPEndPoint_t1569 * __this, ServicePoint_t1544 * ___servicePoint, IPEndPoint_t1548 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C" IPEndPoint_t1548 * BindIPEndPoint_EndInvoke_m8669 (BindIPEndPoint_t1569 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
