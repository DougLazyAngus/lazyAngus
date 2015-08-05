#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Double>
struct Func_2_t6694;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Double>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Byte,System.Double>
#include "System_Core_System_Func_2_gen_238MethodDeclarations.h"
#define Func_2__ctor_m40150(__this, ___object, ___method, method) (( void (*) (Func_2_t6694 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m40131_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Boolean,System.Double>::Invoke(T)
#define Func_2_Invoke_m40151(__this, ___arg1, method) (( double (*) (Func_2_t6694 *, bool, const MethodInfo*))Func_2_Invoke_m40132_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Boolean,System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m40152(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6694 *, bool, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m40133_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Boolean,System.Double>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m40153(__this, ___result, method) (( double (*) (Func_2_t6694 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m40134_gshared)(__this, ___result, method)
