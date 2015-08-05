#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Char>
struct Func_2_t6676;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.Char>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Double,System.UInt16>
#include "System_Core_System_Func_2_gen_171MethodDeclarations.h"
#define Func_2__ctor_m39877(__this, ___object, ___method, method) (( void (*) (Func_2_t6676 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37428_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Char>::Invoke(T)
#define Func_2_Invoke_m39878(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6676 *, double, const MethodInfo*))Func_2_Invoke_m37429_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39879(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6676 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37430_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39880(__this, ___result, method) (( uint16_t (*) (Func_2_t6676 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37431_gshared)(__this, ___result, method)
