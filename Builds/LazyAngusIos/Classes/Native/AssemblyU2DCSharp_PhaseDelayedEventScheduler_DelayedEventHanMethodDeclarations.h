#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhaseDelayedEventScheduler/DelayedEventHandler
struct DelayedEventHandler_t559;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PhaseDelayedEventScheduler/DelayedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DelayedEventHandler__ctor_m3031 (DelayedEventHandler_t559 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhaseDelayedEventScheduler/DelayedEventHandler::Invoke()
extern "C" bool DelayedEventHandler_Invoke_m3032 (DelayedEventHandler_t559 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_DelayedEventHandler_t559(Il2CppObject* delegate);
// System.IAsyncResult PhaseDelayedEventScheduler/DelayedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * DelayedEventHandler_BeginInvoke_m3033 (DelayedEventHandler_t559 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhaseDelayedEventScheduler/DelayedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" bool DelayedEventHandler_EndInvoke_m3034 (DelayedEventHandler_t559 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
