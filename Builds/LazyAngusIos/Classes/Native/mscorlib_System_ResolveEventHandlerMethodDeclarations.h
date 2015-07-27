#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2754;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t667;
// System.ResolveEventArgs
struct ResolveEventArgs_t2808;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m16463 (ResolveEventHandler_t2754 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t667 * ResolveEventHandler_Invoke_m16464 (ResolveEventHandler_t2754 * __this, Object_t * ___sender, ResolveEventArgs_t2808 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t667 * pinvoke_delegate_wrapper_ResolveEventHandler_t2754(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2808 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m16465 (ResolveEventHandler_t2754 * __this, Object_t * ___sender, ResolveEventArgs_t2808 * ___args, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t667 * ResolveEventHandler_EndInvoke_m16466 (ResolveEventHandler_t2754 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
