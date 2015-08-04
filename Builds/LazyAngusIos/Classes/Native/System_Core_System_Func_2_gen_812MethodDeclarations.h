#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>
struct Func_2_t8226;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1336;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.UInt64>
#include "System_Core_System_Func_2_gen_211MethodDeclarations.h"
#define Func_2__ctor_m58714(__this, ___object, ___method, method) (( void (*) (Func_2_t8226 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39067_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::Invoke(T)
#define Func_2_Invoke_m58715(__this, ___arg1, method) (( uint64_t (*) (Func_2_t8226 *, Task_1_t1336 *, const MethodInfo*))Func_2_Invoke_m39068_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58716(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8226 *, Task_1_t1336 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39069_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58717(__this, ___result, method) (( uint64_t (*) (Func_2_t8226 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39070_gshared)(__this, ___result, method)
