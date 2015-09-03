#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>
struct Func_2_t1513;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1410;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_57MethodDeclarations.h"
#define Func_2__ctor_m38760(__this, ___object, ___method, method) (( void (*) (Func_2_t1513 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34853_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::Invoke(T)
#define Func_2_Invoke_m38761(__this, ___arg1, method) (( uint8_t (*) (Func_2_t1513 *, Task_1_t1410 *, const MethodInfo*))Func_2_Invoke_m34855_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m38762(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1513 *, Task_1_t1410 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34857_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m38763(__this, ___result, method) (( uint8_t (*) (Func_2_t1513 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34859_gshared)(__this, ___result, method)
