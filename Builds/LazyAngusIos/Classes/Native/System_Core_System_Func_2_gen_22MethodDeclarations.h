#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Parse.ParseConfig>>
struct Func_2_t1468;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1389;
// System.Threading.Tasks.Task
struct Task_t1210;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Parse.ParseConfig>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7489(__this, ___object, ___method, method) (( void (*) (Func_2_t1468 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7468_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Parse.ParseConfig>>::Invoke(T)
#define Func_2_Invoke_m32408(__this, ___arg1, method) (( Task_1_t1389 * (*) (Func_2_t1468 *, Task_t1210 *, const MethodInfo*))Func_2_Invoke_m30731_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Parse.ParseConfig>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32409(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1468 *, Task_t1210 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30733_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Parse.ParseConfig>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32410(__this, ___result, method) (( Task_1_t1389 * (*) (Func_2_t1468 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30735_gshared)(__this, ___result, method)
