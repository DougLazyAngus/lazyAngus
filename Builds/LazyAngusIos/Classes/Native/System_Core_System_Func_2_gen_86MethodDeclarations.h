﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Func_2_t6090;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6024;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m32385(__this, ___object, ___method, method) (( void (*) (Func_2_t6090 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7151_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::Invoke(T)
#define Func_2_Invoke_m32386(__this, ___arg1, method) (( Task_1_t6024 * (*) (Func_2_t6090 *, Task_t1149 *, const MethodInfo*))Func_2_Invoke_m29980_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32387(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6090 *, Task_t1149 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29982_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32388(__this, ___result, method) (( Task_1_t6024 * (*) (Func_2_t6090 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29984_gshared)(__this, ___result, method)
