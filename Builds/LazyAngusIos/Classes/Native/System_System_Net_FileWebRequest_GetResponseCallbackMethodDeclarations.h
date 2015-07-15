#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t1526;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1525;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetResponseCallback__ctor_m7406 (GetResponseCallback_t1526 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
extern "C" WebResponse_t1525 * GetResponseCallback_Invoke_m7407 (GetResponseCallback_t1526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" WebResponse_t1525 * pinvoke_delegate_wrapper_GetResponseCallback_t1526(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetResponseCallback_BeginInvoke_m7408 (GetResponseCallback_t1526 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
extern "C" WebResponse_t1525 * GetResponseCallback_EndInvoke_m7409 (GetResponseCallback_t1526 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
