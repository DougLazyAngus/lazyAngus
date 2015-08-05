#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.UInt64>
struct Func_2_t6659;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Char,System.UInt64>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt16,System.UInt64>
#include "System_Core_System_Func_2_gen_216MethodDeclarations.h"
#define Func_2__ctor_m39572(__this, ___object, ___method, method) (( void (*) (Func_2_t6659 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39397_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.UInt64>::Invoke(T)
#define Func_2_Invoke_m39573(__this, ___arg1, method) (( uint64_t (*) (Func_2_t6659 *, uint16_t, const MethodInfo*))Func_2_Invoke_m39398_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.UInt64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39574(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6659 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39399_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.UInt64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39575(__this, ___result, method) (( uint64_t (*) (Func_2_t6659 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39400_gshared)(__this, ___result, method)
