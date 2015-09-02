#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t4799;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t783;
// System.ResolveEventArgs
struct ResolveEventArgs_t4852;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m20310 (ResolveEventHandler_t4799 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t783 * ResolveEventHandler_Invoke_m20311 (ResolveEventHandler_t4799 * __this, Object_t * ___sender, ResolveEventArgs_t4852 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t783 * pinvoke_delegate_wrapper_ResolveEventHandler_t4799(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t4852 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m20312 (ResolveEventHandler_t4799 * __this, Object_t * ___sender, ResolveEventArgs_t4852 * ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t783 * ResolveEventHandler_EndInvoke_m20313 (ResolveEventHandler_t4799 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
