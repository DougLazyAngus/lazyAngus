#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>
struct Func_2_t6097;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct Task_1_t6031;
// System.Threading.Tasks.Task
struct Task_t1155;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m32432(__this, ___object, ___method, method) (( void (*) (Func_2_t6097 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7197_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::Invoke(T)
#define Func_2_Invoke_m32433(__this, ___arg1, method) (( Task_1_t6031 * (*) (Func_2_t6097 *, Task_t1155 *, const MethodInfo*))Func_2_Invoke_m30027_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32434(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6097 *, Task_t1155 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30029_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Collections.Generic.IEnumerable`1<System.Object>>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32435(__this, ___result, method) (( Task_1_t6031 * (*) (Func_2_t6097 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30031_gshared)(__this, ___result, method)
