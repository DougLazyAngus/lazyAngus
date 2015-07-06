#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t424;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameController/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m1936 (GamePhaseChangedEventHandler_t424 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m1937 (GamePhaseChangedEventHandler_t424 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t424(Il2CppObject* delegate);
// System.IAsyncResult GameController/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m1938 (GamePhaseChangedEventHandler_t424 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m1939 (GamePhaseChangedEventHandler_t424 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
