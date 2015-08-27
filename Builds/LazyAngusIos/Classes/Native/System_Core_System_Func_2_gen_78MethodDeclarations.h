﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>
struct Func_2_t6148;
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

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_59MethodDeclarations.h"
#define Func_2__ctor_m32978(__this, ___object, ___method, method) (( void (*) (Func_2_t6148 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m30762_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::Invoke(T)
#define Func_2_Invoke_m32979(__this, ___arg1, method) (( int32_t (*) (Func_2_t6148 *, Task_1_t1394 *, const MethodInfo*))Func_2_Invoke_m30764_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32980(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6148 *, Task_1_t1394 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30766_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32981(__this, ___result, method) (( int32_t (*) (Func_2_t6148 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30768_gshared)(__this, ___result, method)
