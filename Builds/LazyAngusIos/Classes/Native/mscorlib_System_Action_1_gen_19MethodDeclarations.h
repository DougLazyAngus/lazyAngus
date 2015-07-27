﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Int32>
struct Action_1_t3587;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m21151_gshared (Action_1_t3587 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m21151(__this, ___object, ___method, method) (( void (*) (Action_1_t3587 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m21151_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Int32>::Invoke(T)
extern "C" void Action_1_Invoke_m21153_gshared (Action_1_t3587 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m21153(__this, ___obj, method) (( void (*) (Action_1_t3587 *, int32_t, const MethodInfo*))Action_1_Invoke_m21153_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m21155_gshared (Action_1_t3587 * __this, int32_t ___obj, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m21155(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3587 *, int32_t, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m21155_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m21157_gshared (Action_1_t3587 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m21157(__this, ___result, method) (( void (*) (Action_1_t3587 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m21157_gshared)(__this, ___result, method)
