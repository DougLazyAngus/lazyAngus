#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t2041;
// System.Object
struct Object_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2001;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HttpContinueDelegate__ctor_m11495 (HttpContinueDelegate_t2041 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpContinueDelegate_Invoke_m11496 (HttpContinueDelegate_t2041 * __this, int32_t ___StatusCode, WebHeaderCollection_t2001 * ___httpHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t2041(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t2001 * ___httpHeaders);
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * HttpContinueDelegate_BeginInvoke_m11497 (HttpContinueDelegate_t2041 * __this, int32_t ___StatusCode, WebHeaderCollection_t2001 * ___httpHeaders, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HttpContinueDelegate_EndInvoke_m11498 (HttpContinueDelegate_t2041 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
