#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Char>
struct Func_2_t6677;
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
#define Func_2__ctor_m39882(__this, ___object, ___method, method) (( void (*) (Func_2_t6677 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m37433_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Char>::Invoke(T)
#define Func_2_Invoke_m39883(__this, ___arg1, method) (( uint16_t (*) (Func_2_t6677 *, double, const MethodInfo*))Func_2_Invoke_m37434_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39884(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6677 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m37435_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39885(__this, ___result, method) (( uint16_t (*) (Func_2_t6677 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m37436_gshared)(__this, ___result, method)
