﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GamePhaseState/GamePhaseChangedEventHandler
struct GamePhaseChangedEventHandler_t509;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GamePhaseState/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m2742 (GamePhaseChangedEventHandler_t509 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m2743 (GamePhaseChangedEventHandler_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t509(Il2CppObject* delegate);
// System.IAsyncResult GamePhaseState/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m2744 (GamePhaseChangedEventHandler_t509 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GamePhaseState/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m2745 (GamePhaseChangedEventHandler_t509 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;