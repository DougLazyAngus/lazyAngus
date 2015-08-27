﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1428;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1394;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m30677(__this, ___object, ___method, method) (( void (*) (Action_1_t1428 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23253_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::Invoke(T)
#define Action_1_Invoke_m30678(__this, ___obj, method) (( void (*) (Action_1_t1428 *, Task_1_t1394 *, const MethodInfo*))Action_1_Invoke_m23255_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m30679(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1428 *, Task_1_t1394 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23257_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Object>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m30680(__this, ___result, method) (( void (*) (Action_1_t1428 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23259_gshared)(__this, ___result, method)
