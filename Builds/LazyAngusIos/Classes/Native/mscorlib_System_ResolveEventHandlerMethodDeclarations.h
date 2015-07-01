#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2654;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t563;
// System.ResolveEventArgs
struct ResolveEventArgs_t2708;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m15553 (ResolveEventHandler_t2654 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t563 * ResolveEventHandler_Invoke_m15554 (ResolveEventHandler_t2654 * __this, Object_t * ___sender, ResolveEventArgs_t2708 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t563 * pinvoke_delegate_wrapper_ResolveEventHandler_t2654(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2708 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m15555 (ResolveEventHandler_t2654 * __this, Object_t * ___sender, ResolveEventArgs_t2708 * ___args, AsyncCallback_t389 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t563 * ResolveEventHandler_EndInvoke_m15556 (ResolveEventHandler_t2654 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
