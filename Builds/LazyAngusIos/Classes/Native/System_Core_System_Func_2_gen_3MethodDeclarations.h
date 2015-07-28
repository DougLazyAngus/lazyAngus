#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.IAsyncResult,System.Int32>
struct Func_2_t1364;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.IAsyncResult,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Int32>
#include "System_Core_System_Func_2_gen_59MethodDeclarations.h"
#define Func_2__ctor_m6982(__this, ___object, ___method, method) (( void (*) (Func_2_t1364 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29887_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.IAsyncResult,System.Int32>::Invoke(T)
#define Func_2_Invoke_m29888(__this, ___arg1, method) (( int32_t (*) (Func_2_t1364 *, Object_t *, const MethodInfo*))Func_2_Invoke_m29889_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.IAsyncResult,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m29890(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1364 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29891_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.IAsyncResult,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m29892(__this, ___result, method) (( int32_t (*) (Func_2_t1364 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29893_gshared)(__this, ___result, method)
