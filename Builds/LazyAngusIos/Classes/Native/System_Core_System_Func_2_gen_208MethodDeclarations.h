#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Char,System.Int64>
struct Func_2_t6718;
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
#define Func_2__ctor_m40114(__this, ___object, ___method, method) (( void (*) (Func_2_t6718 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39939_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Int64>::Invoke(T)
#define Func_2_Invoke_m40115(__this, ___arg1, method) (( int64_t (*) (Func_2_t6718 *, uint16_t, const MethodInfo*))Func_2_Invoke_m39940_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m40116(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6718 *, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39941_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Int64>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m40117(__this, ___result, method) (( int64_t (*) (Func_2_t6718 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39942_gshared)(__this, ___result, method)
