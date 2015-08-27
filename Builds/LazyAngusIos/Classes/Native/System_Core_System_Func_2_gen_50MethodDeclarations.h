﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Func_2_t1550;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1373;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1394;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7795(__this, ___object, ___method, method) (( void (*) (Func_2_t1550 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7490_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::Invoke(T)
#define Func_2_Invoke_m59196(__this, ___arg1, method) (( Task_1_t1373 * (*) (Func_2_t1550 *, Task_1_t1394 *, const MethodInfo*))Func_2_Invoke_m30855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m59197(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1550 *, Task_1_t1394 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m59198(__this, ___result, method) (( Task_1_t1373 * (*) (Func_2_t1550 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30859_gshared)(__this, ___result, method)
