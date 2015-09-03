#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt16,System.Char>
struct Func_2_t7310;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt16,System.Char>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.UInt16>
#include "System_Core_System_Func_2_gen_165MethodDeclarations.h"
#define Func_2__ctor_m45135(__this, ___object, ___method, method) (( void (*) (Func_2_t7310 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42611_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt16,System.Char>::Invoke(T)
#define Func_2_Invoke_m45136(__this, ___arg1, method) (( uint16_t (*) (Func_2_t7310 *, uint16_t, const MethodInfo*))Func_2_Invoke_m42612_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt16,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45137(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7310 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42613_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt16,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45138(__this, ___result, method) (( uint16_t (*) (Func_2_t7310 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42614_gshared)(__this, ___result, method)
