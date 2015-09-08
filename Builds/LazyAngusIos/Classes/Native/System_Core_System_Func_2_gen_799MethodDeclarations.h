#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int16>>
struct Func_2_t8833;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Int16>
struct Task_1_t1573;
// System.Threading.Tasks.Task
struct Task_t1231;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int16>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m63933(__this, ___object, ___method, method) (( void (*) (Func_2_t8833 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7639_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int16>>::Invoke(T)
#define Func_2_Invoke_m63934(__this, ___arg1, method) (( Task_1_t1573 * (*) (Func_2_t8833 *, Task_t1231 *, const MethodInfo*))Func_2_Invoke_m35435_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m63935(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8833 *, Task_t1231 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35437_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<System.Int16>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m63936(__this, ___result, method) (( Task_1_t1573 * (*) (Func_2_t8833 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35439_gshared)(__this, ___result, method)
