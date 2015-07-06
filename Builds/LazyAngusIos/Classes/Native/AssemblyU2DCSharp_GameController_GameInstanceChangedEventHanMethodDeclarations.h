#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameController/GameInstanceChangedEventHandler
struct GameInstanceChangedEventHandler_t422;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameController/GameInstanceChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameInstanceChangedEventHandler__ctor_m1928 (GameInstanceChangedEventHandler_t422 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController/GameInstanceChangedEventHandler::Invoke()
extern "C" void GameInstanceChangedEventHandler_Invoke_m1929 (GameInstanceChangedEventHandler_t422 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GameInstanceChangedEventHandler_t422(Il2CppObject* delegate);
// System.IAsyncResult GameController/GameInstanceChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameInstanceChangedEventHandler_BeginInvoke_m1930 (GameInstanceChangedEventHandler_t422 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController/GameInstanceChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameInstanceChangedEventHandler_EndInvoke_m1931 (GameInstanceChangedEventHandler_t422 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
