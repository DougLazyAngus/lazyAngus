﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats/TreatsChangedEventHandler
struct TreatsChangedEventHandler_t530;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PlayerStats/TreatsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void TreatsChangedEventHandler__ctor_m2792 (TreatsChangedEventHandler_t530 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/TreatsChangedEventHandler::Invoke()
extern "C" void TreatsChangedEventHandler_Invoke_m2793 (TreatsChangedEventHandler_t530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_TreatsChangedEventHandler_t530(Il2CppObject* delegate);
// System.IAsyncResult PlayerStats/TreatsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * TreatsChangedEventHandler_BeginInvoke_m2794 (TreatsChangedEventHandler_t530 * __this, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/TreatsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void TreatsChangedEventHandler_EndInvoke_m2795 (TreatsChangedEventHandler_t530 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
