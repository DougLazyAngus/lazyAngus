﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t4054;
// System.Object
struct Object_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4017;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void HttpContinueDelegate__ctor_m15073 (HttpContinueDelegate_t4054 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpContinueDelegate_Invoke_m15074 (HttpContinueDelegate_t4054 * __this, int32_t ___StatusCode, WebHeaderCollection_t4017 * ___httpHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HttpContinueDelegate_t4054(Il2CppObject* delegate, int32_t ___StatusCode, WebHeaderCollection_t4017 * ___httpHeaders);
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * HttpContinueDelegate_BeginInvoke_m15075 (HttpContinueDelegate_t4054 * __this, int32_t ___StatusCode, WebHeaderCollection_t4017 * ___httpHeaders, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
extern "C" void HttpContinueDelegate_EndInvoke_m15076 (HttpContinueDelegate_t4054 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
