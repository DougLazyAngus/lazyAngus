#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Threading.Tasks.Task>
struct Func_2_t1553;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1227;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1390;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7884(__this, ___object, ___method, method) (( void (*) (Func_2_t1553 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7626_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Threading.Tasks.Task>::Invoke(T)
#define Func_2_Invoke_m39725(__this, ___arg1, method) (( Task_t1227 * (*) (Func_2_t1553 *, Task_1_t1390 *, const MethodInfo*))Func_2_Invoke_m35410_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Threading.Tasks.Task>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39726(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1553 *, Task_1_t1390 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35412_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>,System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39727(__this, ___result, method) (( Task_t1227 * (*) (Func_2_t1553 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35414_gshared)(__this, ___result, method)
