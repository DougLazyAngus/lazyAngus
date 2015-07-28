#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnionAssets.FLE.EventHandlerFunction
struct EventHandlerFunction_t620;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnionAssets.FLE.EventHandlerFunction::.ctor(System.Object,System.IntPtr)
extern "C" void EventHandlerFunction__ctor_m3345 (EventHandlerFunction_t620 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventHandlerFunction::Invoke()
extern "C" void EventHandlerFunction_Invoke_m3346 (EventHandlerFunction_t620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EventHandlerFunction_t620(Il2CppObject* delegate);
// System.IAsyncResult UnionAssets.FLE.EventHandlerFunction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * EventHandlerFunction_BeginInvoke_m3347 (EventHandlerFunction_t620 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnionAssets.FLE.EventHandlerFunction::EndInvoke(System.IAsyncResult)
extern "C" void EventHandlerFunction_EndInvoke_m3348 (EventHandlerFunction_t620 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
