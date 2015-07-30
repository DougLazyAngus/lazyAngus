#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole/CapacityChangedEventHandler
struct CapacityChangedEventHandler_t561;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MouseHole/CapacityChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CapacityChangedEventHandler__ctor_m2932 (CapacityChangedEventHandler_t561 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole/CapacityChangedEventHandler::Invoke()
extern "C" void CapacityChangedEventHandler_Invoke_m2933 (CapacityChangedEventHandler_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CapacityChangedEventHandler_t561(Il2CppObject* delegate);
// System.IAsyncResult MouseHole/CapacityChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * CapacityChangedEventHandler_BeginInvoke_m2934 (CapacityChangedEventHandler_t561 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole/CapacityChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void CapacityChangedEventHandler_EndInvoke_m2935 (CapacityChangedEventHandler_t561 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
