#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController/PauseChangedEventHandler
struct PauseChangedEventHandler_t654;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void TimeController/PauseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PauseChangedEventHandler__ctor_m3526 (PauseChangedEventHandler_t654 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController/PauseChangedEventHandler::Invoke()
extern "C" void PauseChangedEventHandler_Invoke_m3527 (PauseChangedEventHandler_t654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PauseChangedEventHandler_t654(Il2CppObject* delegate);
// System.IAsyncResult TimeController/PauseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * PauseChangedEventHandler_BeginInvoke_m3528 (PauseChangedEventHandler_t654 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController/PauseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PauseChangedEventHandler_EndInvoke_m3529 (PauseChangedEventHandler_t654 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
