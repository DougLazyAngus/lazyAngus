#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.UInt16>
struct Func_2_t7114;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.UInt16>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.UInt16>
#include "System_Core_System_Func_2_gen_161MethodDeclarations.h"
#define Func_2__ctor_m42603(__this, ___object, ___method, method) (( void (*) (Func_2_t7114 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m42584_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.UInt16>::Invoke(T)
#define Func_2_Invoke_m42604(__this, ___arg1, method) (( uint16_t (*) (Func_2_t7114 *, bool, const MethodInfo*))Func_2_Invoke_m42585_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42605(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7114 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m42586_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.UInt16>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42606(__this, ___result, method) (( uint16_t (*) (Func_2_t7114 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m42587_gshared)(__this, ___result, method)
