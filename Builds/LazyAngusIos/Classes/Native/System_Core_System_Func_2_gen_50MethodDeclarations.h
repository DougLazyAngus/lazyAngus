#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Func_2_t1490;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1313;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1334;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7457(__this, ___object, ___method, method) (( void (*) (Func_2_t1490 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7151_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::Invoke(T)
#define Func_2_Invoke_m58328(__this, ___arg1, method) (( Task_1_t1313 * (*) (Func_2_t1490 *, Task_1_t1334 *, const MethodInfo*))Func_2_Invoke_m29980_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58329(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1490 *, Task_1_t1334 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29982_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58330(__this, ___result, method) (( Task_1_t1313 * (*) (Func_2_t1490 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29984_gshared)(__this, ___result, method)
