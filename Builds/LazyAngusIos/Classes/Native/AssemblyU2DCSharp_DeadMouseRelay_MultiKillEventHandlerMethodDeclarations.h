#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DeadMouseRelay/MultiKillEventHandler
struct MultiKillEventHandler_t516;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DeadMouseRelay/MultiKillEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MultiKillEventHandler__ctor_m2822 (MultiKillEventHandler_t516 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay/MultiKillEventHandler::Invoke(System.Int32,UnityEngine.Vector3)
extern "C" void MultiKillEventHandler_Invoke_m2823 (MultiKillEventHandler_t516 * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MultiKillEventHandler_t516(Il2CppObject* delegate, int32_t ___numKilled, Vector3_t523  ___pawPosition);
// System.IAsyncResult DeadMouseRelay/MultiKillEventHandler::BeginInvoke(System.Int32,UnityEngine.Vector3,System.AsyncCallback,System.Object)
extern "C" Object_t * MultiKillEventHandler_BeginInvoke_m2824 (MultiKillEventHandler_t516 * __this, int32_t ___numKilled, Vector3_t523  ___pawPosition, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DeadMouseRelay/MultiKillEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MultiKillEventHandler_EndInvoke_m2825 (MultiKillEventHandler_t516 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
