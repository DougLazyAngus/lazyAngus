#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MouseHole/MousePopChangedEventHandler
struct MousePopChangedEventHandler_t468;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MouseHole/MousePopChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MousePopChangedEventHandler__ctor_m2130 (MousePopChangedEventHandler_t468 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole/MousePopChangedEventHandler::Invoke()
extern "C" void MousePopChangedEventHandler_Invoke_m2131 (MousePopChangedEventHandler_t468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MousePopChangedEventHandler_t468(Il2CppObject* delegate);
// System.IAsyncResult MouseHole/MousePopChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MousePopChangedEventHandler_BeginInvoke_m2132 (MousePopChangedEventHandler_t468 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MouseHole/MousePopChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MousePopChangedEventHandler_EndInvoke_m2133 (MousePopChangedEventHandler_t468 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
