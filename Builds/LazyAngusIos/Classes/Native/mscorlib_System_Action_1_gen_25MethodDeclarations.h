﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>
struct Action_1_t2161;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1416;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_34MethodDeclarations.h"
#define Action_1__ctor_m7860(__this, ___object, ___method, method) (( void (*) (Action_1_t2161 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m23253_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>::Invoke(T)
#define Action_1_Invoke_m60101(__this, ___obj, method) (( void (*) (Action_1_t2161 *, Task_1_t1416 *, const MethodInfo*))Action_1_Invoke_m23255_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m60102(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2161 *, Task_1_t1416 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m23257_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m60103(__this, ___result, method) (( void (*) (Action_1_t2161 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m23259_gshared)(__this, ___result, method)
