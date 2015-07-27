﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerStats/BoostsChangedEventHandler
struct BoostsChangedEventHandler_t533;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PlayerStats/BoostsChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void BoostsChangedEventHandler__ctor_m2803 (BoostsChangedEventHandler_t533 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/BoostsChangedEventHandler::Invoke()
extern "C" void BoostsChangedEventHandler_Invoke_m2804 (BoostsChangedEventHandler_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BoostsChangedEventHandler_t533(Il2CppObject* delegate);
// System.IAsyncResult PlayerStats/BoostsChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BoostsChangedEventHandler_BeginInvoke_m2805 (BoostsChangedEventHandler_t533 * __this, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerStats/BoostsChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostsChangedEventHandler_EndInvoke_m2806 (BoostsChangedEventHandler_t533 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
