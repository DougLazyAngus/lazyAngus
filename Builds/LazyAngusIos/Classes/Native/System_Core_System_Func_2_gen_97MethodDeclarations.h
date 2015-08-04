#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseSession>,Parse.ParseSession>
struct Func_2_t6216;
// System.Object
struct Object_t;
// Parse.ParseSession
struct ParseSession_t1251;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1356;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseSession>,Parse.ParseSession>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m34179(__this, ___object, ___method, method) (( void (*) (Func_2_t6216 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7210_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseSession>,Parse.ParseSession>::Invoke(T)
#define Func_2_Invoke_m34180(__this, ___arg1, method) (( ParseSession_t1251 * (*) (Func_2_t6216 *, Task_1_t1356 *, const MethodInfo*))Func_2_Invoke_m30043_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseSession>,Parse.ParseSession>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34181(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6216 *, Task_1_t1356 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30045_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<Parse.ParseSession>,Parse.ParseSession>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34182(__this, ___result, method) (( ParseSession_t1251 * (*) (Func_2_t6216 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30047_gshared)(__this, ___result, method)
