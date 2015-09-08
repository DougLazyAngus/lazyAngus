#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Object>
struct Func_2_t6877;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Object>
#include "System_Core_System_Func_2_gen_99MethodDeclarations.h"
#define Func_2__ctor_m39949(__this, ___object, ___method, method) (( void (*) (Func_2_t6877 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39930_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Object>::Invoke(T)
#define Func_2_Invoke_m39950(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6877 *, bool, const MethodInfo*))Func_2_Invoke_m39931_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m39951(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6877 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39932_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m39952(__this, ___result, method) (( Object_t * (*) (Func_2_t6877 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39933_gshared)(__this, ___result, method)
