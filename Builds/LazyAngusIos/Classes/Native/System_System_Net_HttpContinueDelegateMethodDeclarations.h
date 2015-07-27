#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t2042;
// System.Object
struct Object_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2002;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HttpContinueDelegate__ctor_m11502 (HttpContinueDelegate_t2042 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpContinueDelegate_Invoke_m11503 (HttpContinueDelegate_t2042 * __this, int32_t ___StatusCode, WebHeaderCollection_t2002 * ___httpHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t2042(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t2002 * ___httpHeaders);
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * HttpContinueDelegate_BeginInvoke_m11504 (HttpContinueDelegate_t2042 * __this, int32_t ___StatusCode, WebHeaderCollection_t2002 * ___httpHeaders, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HttpContinueDelegate_EndInvoke_m11505 (HttpContinueDelegate_t2042 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
