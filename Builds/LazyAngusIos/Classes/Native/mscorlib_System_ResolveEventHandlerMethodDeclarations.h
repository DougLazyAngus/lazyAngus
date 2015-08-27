﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t4783;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t770;
// System.ResolveEventArgs
struct ResolveEventArgs_t4836;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m20181 (ResolveEventHandler_t4783 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t770 * ResolveEventHandler_Invoke_m20182 (ResolveEventHandler_t4783 * __this, Object_t * ___sender, ResolveEventArgs_t4836 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t770 * pinvoke_delegate_wrapper_ResolveEventHandler_t4783(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t4836 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m20183 (ResolveEventHandler_t4783 * __this, Object_t * ___sender, ResolveEventArgs_t4836 * ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t770 * ResolveEventHandler_EndInvoke_m20184 (ResolveEventHandler_t4783 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
