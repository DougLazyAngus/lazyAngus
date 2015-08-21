#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>
struct Func_2_t6287;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1298;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6289;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m34871(__this, ___object, ___method, method) (( void (*) (Func_2_t6287 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7457_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::Invoke(T)
#define Func_2_Invoke_m34872(__this, ___arg1, method) (( ParseRole_t1298 * (*) (Func_2_t6287 *, Task_1_t6289 *, const MethodInfo*))Func_2_Invoke_m30822_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34873(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6287 *, Task_1_t6289 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30824_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34874(__this, ___result, method) (( ParseRole_t1298 * (*) (Func_2_t6287 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30826_gshared)(__this, ___result, method)
