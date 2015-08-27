#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t4033;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t3303;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetResponseCallback__ctor_m13824 (GetResponseCallback_t4033 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
extern "C" WebResponse_t3303 * GetResponseCallback_Invoke_m13825 (GetResponseCallback_t4033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" WebResponse_t3303 * pinvoke_delegate_wrapper_GetResponseCallback_t4033(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetResponseCallback_BeginInvoke_m13826 (GetResponseCallback_t4033 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
extern "C" WebResponse_t3303 * GetResponseCallback_EndInvoke_m13827 (GetResponseCallback_t4033 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
