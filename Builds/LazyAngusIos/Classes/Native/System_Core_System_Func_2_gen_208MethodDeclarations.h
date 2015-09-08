#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.Int64>
struct Func_2_t7257;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Char,System.Int64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.Int64>
#include "System_Core_System_Func_2_gen_203MethodDeclarations.h"
#define Func_2__ctor_m44387(__this, ___object, ___method, method) (( void (*) (Func_2_t7257 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m44212_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Int64>::Invoke(T)
#define Func_2_Invoke_m44388(__this, ___arg1, method) (( int64_t (*) (Func_2_t7257 *, uint16_t, const MethodInfo*))Func_2_Invoke_m44213_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m44389(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7257 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m44214_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Int64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m44390(__this, ___result, method) (( int64_t (*) (Func_2_t7257 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m44215_gshared)(__this, ___result, method)
