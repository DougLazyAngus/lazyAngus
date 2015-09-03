﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RealAngusData/RealAngusDataChangedEventHandler
struct RealAngusDataChangedEventHandler_t642;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void RealAngusData/RealAngusDataChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void RealAngusDataChangedEventHandler__ctor_m3468 (RealAngusDataChangedEventHandler_t642 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData/RealAngusDataChangedEventHandler::Invoke()
extern "C" void RealAngusDataChangedEventHandler_Invoke_m3469 (RealAngusDataChangedEventHandler_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_RealAngusDataChangedEventHandler_t642(Il2CppObject* delegate);
// System.IAsyncResult RealAngusData/RealAngusDataChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * RealAngusDataChangedEventHandler_BeginInvoke_m3470 (RealAngusDataChangedEventHandler_t642 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RealAngusData/RealAngusDataChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void RealAngusDataChangedEventHandler_EndInvoke_m3471 (RealAngusDataChangedEventHandler_t642 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;