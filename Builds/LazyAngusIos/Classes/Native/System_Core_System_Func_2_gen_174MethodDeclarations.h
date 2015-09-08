#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Int32>
struct Func_2_t7141;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Int32>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Int32>
#include "System_Core_System_Func_2_gen_173MethodDeclarations.h"
#define Func_2__ctor_m42967(__this, ___object, ___method, method) (( void (*) (Func_2_t7141 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42948_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Int32>::Invoke(T)
#define Func_2_Invoke_m42968(__this, ___arg1, method) (( int32_t (*) (Func_2_t7141 *, bool, const MethodInfo*))Func_2_Invoke_m42949_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42969(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7141 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42950_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Int32>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42970(__this, ___result, method) (( int32_t (*) (Func_2_t7141 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42951_gshared)(__this, ___result, method)
