#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>
struct Func_2_t1488;
// System.Object
struct Object_t;
// Parse.ParseUser
struct ParseUser_t1255;
// System.Threading.Tasks.Task
struct Task_t1159;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7484(__this, ___object, ___method, method) (( void (*) (Func_2_t1488 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7225_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::Invoke(T)
#define Func_2_Invoke_m34359(__this, ___arg1, method) (( ParseUser_t1255 * (*) (Func_2_t1488 *, Task_t1159 *, const MethodInfo*))Func_2_Invoke_m30058_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34360(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1488 *, Task_t1159 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30060_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,Parse.ParseUser>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34361(__this, ___result, method) (( ParseUser_t1255 * (*) (Func_2_t1488 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30062_gshared)(__this, ___result, method)
