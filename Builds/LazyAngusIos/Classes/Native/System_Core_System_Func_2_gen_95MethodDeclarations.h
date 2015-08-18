#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>
struct Func_2_t6283;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1300;
// System.Threading.Tasks.Task`1<Parse.ParseRole>
struct Task_1_t6285;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m34780(__this, ___object, ___method, method) (( void (*) (Func_2_t6283 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7468_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::Invoke(T)
#define Func_2_Invoke_m34781(__this, ___arg1, method) (( ParseRole_t1300 * (*) (Func_2_t6283 *, Task_1_t6285 *, const MethodInfo*))Func_2_Invoke_m30731_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34782(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6283 *, Task_1_t6285 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30733_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseRole>,Parse.ParseRole>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34783(__this, ___result, method) (( ParseRole_t1300 * (*) (Func_2_t6283 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30735_gshared)(__this, ___result, method)
