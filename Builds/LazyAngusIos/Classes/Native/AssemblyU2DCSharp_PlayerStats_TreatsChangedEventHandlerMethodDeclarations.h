﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t577;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PlayerStats/TreatsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TreatsChangedEventHandler__ctor_m3095 (TreatsChangedEventHandler_t577 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/TreatsChangedEventHandler::Invoke()
extern "C" void TreatsChangedEventHandler_Invoke_m3096 (TreatsChangedEventHandler_t577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TreatsChangedEventHandler_t577(Il2CppObject* delegate);
// System.IAsyncResult PlayerStats/TreatsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TreatsChangedEventHandler_BeginInvoke_m3097 (TreatsChangedEventHandler_t577 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/TreatsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TreatsChangedEventHandler_EndInvoke_m3098 (TreatsChangedEventHandler_t577 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
