﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameLevelState/GameLevelChangedEventHandler
struct GameLevelChangedEventHandler_t556;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameLevelState/GameLevelChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameLevelChangedEventHandler__ctor_m2970 (GameLevelChangedEventHandler_t556 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState/GameLevelChangedEventHandler::Invoke()
extern "C" void GameLevelChangedEventHandler_Invoke_m2971 (GameLevelChangedEventHandler_t556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_GameLevelChangedEventHandler_t556(Il2CppObject* delegate);
// System.IAsyncResult GameLevelState/GameLevelChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameLevelChangedEventHandler_BeginInvoke_m2972 (GameLevelChangedEventHandler_t556 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLevelState/GameLevelChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameLevelChangedEventHandler_EndInvoke_m2973 (GameLevelChangedEventHandler_t556 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
