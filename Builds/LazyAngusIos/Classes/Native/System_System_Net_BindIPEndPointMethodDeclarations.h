﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t2054;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2036;
// System.Net.ServicePoint
struct ServicePoint_t1883;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C" void BindIPEndPoint__ctor_m11494 (BindIPEndPoint_t2054 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C" IPEndPoint_t2036 * BindIPEndPoint_Invoke_m11495 (BindIPEndPoint_t2054 * __this, ServicePoint_t1883 * ___servicePoint, IPEndPoint_t2036 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t2036 * pinvoke_delegate_wrapper_BindIPEndPoint_t2054(Il2CppObject* delegate, ServicePoint_t1883 * ___servicePoint, IPEndPoint_t2036 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * BindIPEndPoint_BeginInvoke_m11496 (BindIPEndPoint_t2054 * __this, ServicePoint_t1883 * ___servicePoint, IPEndPoint_t2036 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C" IPEndPoint_t2036 * BindIPEndPoint_EndInvoke_m11497 (BindIPEndPoint_t2054 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
