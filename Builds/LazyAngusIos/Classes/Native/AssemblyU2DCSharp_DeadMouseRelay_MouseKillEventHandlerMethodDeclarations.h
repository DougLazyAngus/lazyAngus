#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DeadMouseRelay/MouseKillEventHandler
struct MouseKillEventHandler_t489;
// System.Object
struct Object_t;
// MouseMove
struct MouseMove_t488;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void DeadMouseRelay/MouseKillEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MouseKillEventHandler__ctor_m2639 (MouseKillEventHandler_t489 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay/MouseKillEventHandler::Invoke(MouseMove)
extern "C" void MouseKillEventHandler_Invoke_m2640 (MouseKillEventHandler_t489 * __this, MouseMove_t488 * ___mouseMove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MouseKillEventHandler_t489(Il2CppObject* delegate, MouseMove_t488 * ___mouseMove);
// System.IAsyncResult DeadMouseRelay/MouseKillEventHandler::BeginInvoke(MouseMove,System.AsyncCallback,System.Object)
extern "C" Object_t * MouseKillEventHandler_BeginInvoke_m2641 (MouseKillEventHandler_t489 * __this, MouseMove_t488 * ___mouseMove, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay/MouseKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MouseKillEventHandler_EndInvoke_m2642 (MouseKillEventHandler_t489 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
