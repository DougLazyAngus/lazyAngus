#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats/ScoreChangedEventHandler
struct ScoreChangedEventHandler_t585;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PlayerStats/ScoreChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ScoreChangedEventHandler__ctor_m3143 (ScoreChangedEventHandler_t585 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/ScoreChangedEventHandler::Invoke()
extern "C" void ScoreChangedEventHandler_Invoke_m3144 (ScoreChangedEventHandler_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ScoreChangedEventHandler_t585(Il2CppObject* delegate);
// System.IAsyncResult PlayerStats/ScoreChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * ScoreChangedEventHandler_BeginInvoke_m3145 (ScoreChangedEventHandler_t585 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/ScoreChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ScoreChangedEventHandler_EndInvoke_m3146 (ScoreChangedEventHandler_t585 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
