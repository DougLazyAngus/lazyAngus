#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action
struct Action_t143;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" void Action__ctor_m3974 (Action_t143 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::Invoke()
extern "C" void Action_Invoke_m15206 (Action_t143 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Action_t143(Il2CppObject* delegate);
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Action_BeginInvoke_m15207 (Action_t143 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C" void Action_EndInvoke_m15208 (Action_t143 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
