﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats/MoneyChangedEventHandler
struct MoneyChangedEventHandler_t576;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PlayerStats/MoneyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void MoneyChangedEventHandler__ctor_m3093 (MoneyChangedEventHandler_t576 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/MoneyChangedEventHandler::Invoke()
extern "C" void MoneyChangedEventHandler_Invoke_m3094 (MoneyChangedEventHandler_t576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MoneyChangedEventHandler_t576(Il2CppObject* delegate);
// System.IAsyncResult PlayerStats/MoneyChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * MoneyChangedEventHandler_BeginInvoke_m3095 (MoneyChangedEventHandler_t576 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/MoneyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void MoneyChangedEventHandler_EndInvoke_m3096 (MoneyChangedEventHandler_t576 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;