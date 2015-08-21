#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,System.Threading.Tasks.Task`1<Parse.ParseSession>>
struct Func_2_t1528;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1405;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1388;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,System.Threading.Tasks.Task`1<Parse.ParseSession>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7688(__this, ___object, ___method, method) (( void (*) (Func_2_t1528 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7458_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,System.Threading.Tasks.Task`1<Parse.ParseSession>>::Invoke(T)
#define Func_2_Invoke_m34978(__this, ___arg1, method) (( Task_1_t1405 * (*) (Func_2_t1528 *, Task_1_t1388 *, const MethodInfo*))Func_2_Invoke_m30823_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,System.Threading.Tasks.Task`1<Parse.ParseSession>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34979(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1528 *, Task_1_t1388 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30825_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,System.Threading.Tasks.Task`1<Parse.ParseSession>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34980(__this, ___result, method) (( Task_1_t1405 * (*) (Func_2_t1528 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30827_gshared)(__this, ___result, method)
