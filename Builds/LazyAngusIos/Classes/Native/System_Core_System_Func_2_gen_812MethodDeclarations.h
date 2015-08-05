#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>
struct Func_2_t8228;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1338;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.UInt64>
#include "System_Core_System_Func_2_gen_211MethodDeclarations.h"
#define Func_2__ctor_m58726(__this, ___object, ___method, method) (( void (*) (Func_2_t8228 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39079_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::Invoke(T)
#define Func_2_Invoke_m58727(__this, ___arg1, method) (( uint64_t (*) (Func_2_t8228 *, Task_1_t1338 *, const MethodInfo*))Func_2_Invoke_m39080_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58728(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8228 *, Task_1_t1338 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39081_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,System.UInt64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58729(__this, ___result, method) (( uint64_t (*) (Func_2_t8228 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39082_gshared)(__this, ___result, method)
