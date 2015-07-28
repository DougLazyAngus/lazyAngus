#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task,System.SByte>
struct Func_2_t8160;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1149;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task,System.SByte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.SByte>
#include "System_Core_System_Func_2_gen_134MethodDeclarations.h"
#define Func_2__ctor_m58371(__this, ___object, ___method, method) (( void (*) (Func_2_t8160 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35679_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.SByte>::Invoke(T)
#define Func_2_Invoke_m58372(__this, ___arg1, method) (( int8_t (*) (Func_2_t8160 *, Task_t1149 *, const MethodInfo*))Func_2_Invoke_m35680_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58373(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8160 *, Task_t1149 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35681_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task,System.SByte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58374(__this, ___result, method) (( int8_t (*) (Func_2_t8160 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35682_gshared)(__this, ___result, method)
