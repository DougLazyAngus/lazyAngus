#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t2018;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t1705;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetResponseCallback__ctor_m10267 (GetResponseCallback_t2018 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
extern "C" WebResponse_t1705 * GetResponseCallback_Invoke_m10268 (GetResponseCallback_t2018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" WebResponse_t1705 * pinvoke_delegate_wrapper_GetResponseCallback_t2018(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetResponseCallback_BeginInvoke_m10269 (GetResponseCallback_t2018 * __this, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
extern "C" WebResponse_t1705 * GetResponseCallback_EndInvoke_m10270 (GetResponseCallback_t2018 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
