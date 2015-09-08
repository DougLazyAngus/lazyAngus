#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t4854;
// System.Object
struct Object_t;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t4855;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ConsoleCancelEventHandler__ctor_m24432 (ConsoleCancelEventHandler_t4854 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C" void ConsoleCancelEventHandler_Invoke_m24433 (ConsoleCancelEventHandler_t4854 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t4855 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ConsoleCancelEventHandler_t4854(Il2CppObject* delegate, Object_t * ___sender, ConsoleCancelEventArgs_t4855 * ___e);
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ConsoleCancelEventHandler_BeginInvoke_m24434 (ConsoleCancelEventHandler_t4854 * __this, Object_t * ___sender, ConsoleCancelEventArgs_t4855 * ___e, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ConsoleCancelEventHandler_EndInvoke_m24435 (ConsoleCancelEventHandler_t4854 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
