#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t4849;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t794;
// System.ResolveEventArgs
struct ResolveEventArgs_t4917;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m24496 (ResolveEventHandler_t4849 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t794 * ResolveEventHandler_Invoke_m24497 (ResolveEventHandler_t4849 * __this, Object_t * ___sender, ResolveEventArgs_t4917 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t794 * pinvoke_delegate_wrapper_ResolveEventHandler_t4849(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t4917 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m24498 (ResolveEventHandler_t4849 * __this, Object_t * ___sender, ResolveEventArgs_t4917 * ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t794 * ResolveEventHandler_EndInvoke_m24499 (ResolveEventHandler_t4849 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
