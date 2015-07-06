#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadStart
struct ThreadStart_t1719;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadStart__ctor_m8611 (ThreadStart_t1719 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::Invoke()
extern "C" void ThreadStart_Invoke_m15684 (ThreadStart_t1719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t1719(Il2CppObject* delegate);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadStart_BeginInvoke_m15685 (ThreadStart_t1719 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C" void ThreadStart_EndInvoke_m15686 (ThreadStart_t1719 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
