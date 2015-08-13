#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t4782;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t769;
// System.ResolveEventArgs
struct ResolveEventArgs_t4835;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m20162 (ResolveEventHandler_t4782 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t769 * ResolveEventHandler_Invoke_m20163 (ResolveEventHandler_t4782 * __this, Object_t * ___sender, ResolveEventArgs_t4835 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t769 * pinvoke_delegate_wrapper_ResolveEventHandler_t4782(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t4835 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m20164 (ResolveEventHandler_t4782 * __this, Object_t * ___sender, ResolveEventArgs_t4835 * ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t769 * ResolveEventHandler_EndInvoke_m20165 (ResolveEventHandler_t4782 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
