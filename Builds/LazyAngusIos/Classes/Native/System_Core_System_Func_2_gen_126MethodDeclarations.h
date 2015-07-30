#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt64,System.Boolean>
struct Func_2_t6334;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt64,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.UInt64,System.Byte>
#include "System_Core_System_Func_2_gen_125MethodDeclarations.h"
#define Func_2__ctor_m35536(__this, ___object, ___method, method) (( void (*) (Func_2_t6334 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35517_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt64,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m35537(__this, ___arg1, method) (( bool (*) (Func_2_t6334 *, uint64_t, const MethodInfo*))Func_2_Invoke_m35518_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt64,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m35538(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6334 *, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35519_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt64,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m35539(__this, ___result, method) (( bool (*) (Func_2_t6334 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35520_gshared)(__this, ___result, method)
