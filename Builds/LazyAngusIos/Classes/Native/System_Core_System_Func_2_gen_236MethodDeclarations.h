#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Char>
struct Func_2_t7330;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Char>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Single,System.UInt16>
#include "System_Core_System_Func_2_gen_172MethodDeclarations.h"
#define Func_2__ctor_m45357(__this, ___object, ___method, method) (( void (*) (Func_2_t7330 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42923_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Char>::Invoke(T)
#define Func_2_Invoke_m45358(__this, ___arg1, method) (( uint16_t (*) (Func_2_t7330 *, float, const MethodInfo*))Func_2_Invoke_m42924_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m45359(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7330 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42925_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Char>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m45360(__this, ___result, method) (( uint16_t (*) (Func_2_t7330 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42926_gshared)(__this, ___result, method)
