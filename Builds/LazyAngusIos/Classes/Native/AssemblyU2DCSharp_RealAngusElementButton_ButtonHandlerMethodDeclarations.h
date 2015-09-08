#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusElementButton/ButtonHandler
struct ButtonHandler_t649;
// System.Object
struct Object_t;
// RealAngusElementButton
struct RealAngusElementButton_t643;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void RealAngusElementButton/ButtonHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ButtonHandler__ctor_m3493 (ButtonHandler_t649 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton/ButtonHandler::Invoke(RealAngusElementButton)
extern "C" void ButtonHandler_Invoke_m3494 (ButtonHandler_t649 * __this, RealAngusElementButton_t643 * ___button, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ButtonHandler_t649(Il2CppObject* delegate, RealAngusElementButton_t643 * ___button);
// System.IAsyncResult RealAngusElementButton/ButtonHandler::BeginInvoke(RealAngusElementButton,System.AsyncCallback,System.Object)
extern "C" Object_t * ButtonHandler_BeginInvoke_m3495 (ButtonHandler_t649 * __this, RealAngusElementButton_t643 * ___button, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusElementButton/ButtonHandler::EndInvoke(System.IAsyncResult)
extern "C" void ButtonHandler_EndInvoke_m3496 (ButtonHandler_t649 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
