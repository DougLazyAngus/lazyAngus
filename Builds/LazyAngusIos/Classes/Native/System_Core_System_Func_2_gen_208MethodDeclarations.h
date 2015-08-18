#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.Int64>
struct Func_2_t6682;
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
#define Func_2__ctor_m39658(__this, ___object, ___method, method) (( void (*) (Func_2_t6682 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39483_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Int64>::Invoke(T)
#define Func_2_Invoke_m39659(__this, ___arg1, method) (( int64_t (*) (Func_2_t6682 *, uint16_t, const MethodInfo*))Func_2_Invoke_m39484_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39660(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6682 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39485_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Int64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39661(__this, ___result, method) (( int64_t (*) (Func_2_t6682 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39486_gshared)(__this, ___result, method)
