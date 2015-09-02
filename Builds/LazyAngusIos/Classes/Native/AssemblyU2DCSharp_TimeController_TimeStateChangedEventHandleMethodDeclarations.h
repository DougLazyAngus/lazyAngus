#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TimeController/TimeStateChangedEventHandler
struct TimeStateChangedEventHandler_t674;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void TimeController/TimeStateChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TimeStateChangedEventHandler__ctor_m3674 (TimeStateChangedEventHandler_t674 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController/TimeStateChangedEventHandler::Invoke()
extern "C" void TimeStateChangedEventHandler_Invoke_m3675 (TimeStateChangedEventHandler_t674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TimeStateChangedEventHandler_t674(Il2CppObject* delegate);
// System.IAsyncResult TimeController/TimeStateChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TimeStateChangedEventHandler_BeginInvoke_m3676 (TimeStateChangedEventHandler_t674 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TimeController/TimeStateChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TimeStateChangedEventHandler_EndInvoke_m3677 (TimeStateChangedEventHandler_t674 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
