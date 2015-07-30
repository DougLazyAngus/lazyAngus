#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,Parse.ParseUser>
struct Func_2_t6205;
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t1251;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t1337;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,Parse.ParseUser>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m34202(__this, ___object, ___method, method) (( void (*) (Func_2_t6205 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7197_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,Parse.ParseUser>::Invoke(T)
#define Func_2_Invoke_m34203(__this, ___arg1, method) (( ParseUser_t1251 * (*) (Func_2_t6205 *, Task_1_t1337 *, const MethodInfo*))Func_2_Invoke_m30027_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,Parse.ParseUser>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34204(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6205 *, Task_1_t1337 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30029_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseUser>,Parse.ParseUser>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34205(__this, ___result, method) (( ParseUser_t1251 * (*) (Func_2_t6205 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30031_gshared)(__this, ___result, method)
