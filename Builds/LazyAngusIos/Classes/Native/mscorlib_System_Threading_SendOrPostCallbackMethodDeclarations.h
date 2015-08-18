#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2161;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" void SendOrPostCallback__ctor_m7840 (SendOrPostCallback_t2161 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" void SendOrPostCallback_Invoke_m20136 (SendOrPostCallback_t2161 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SendOrPostCallback_t2161(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.SendOrPostCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SendOrPostCallback_BeginInvoke_m20137 (SendOrPostCallback_t2161 * __this, Object_t * ___state, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.SendOrPostCallback::EndInvoke(System.IAsyncResult)
extern "C" void SendOrPostCallback_EndInvoke_m20138 (SendOrPostCallback_t2161 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
