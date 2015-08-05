#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>
struct Func_2_t8169;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1344;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.SByte>
#include "System_Core_System_Func_2_gen_134MethodDeclarations.h"
#define Func_2__ctor_m58440(__this, ___object, ___method, method) (( void (*) (Func_2_t8169 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35754_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>::Invoke(T)
#define Func_2_Invoke_m58441(__this, ___arg1, method) (( int8_t (*) (Func_2_t8169 *, Task_1_t1344 *, const MethodInfo*))Func_2_Invoke_m35755_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m58442(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t8169 *, Task_1_t1344 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35756_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.SByte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m58443(__this, ___result, method) (( int8_t (*) (Func_2_t8169 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35757_gshared)(__this, ___result, method)
