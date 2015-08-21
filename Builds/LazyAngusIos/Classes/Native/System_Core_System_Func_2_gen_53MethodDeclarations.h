#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.AggregateException>
struct Func_2_t1343;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1336;
// System.Threading.Tasks.Task
struct Task_t1208;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.AggregateException>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7792(__this, ___object, ___method, method) (( void (*) (Func_2_t1343 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7458_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.AggregateException>::Invoke(T)
#define Func_2_Invoke_m60008(__this, ___arg1, method) (( AggregateException_t1336 * (*) (Func_2_t1343 *, Task_t1208 *, const MethodInfo*))Func_2_Invoke_m30823_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.AggregateException>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m60009(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1343 *, Task_t1208 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30825_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.AggregateException>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m60010(__this, ___result, method) (( AggregateException_t1336 * (*) (Func_2_t1343 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30827_gshared)(__this, ___result, method)
