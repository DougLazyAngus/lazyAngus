#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.List`1<System.Int32>,System.Object>
struct Func_2_t6857;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t744;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.List`1<System.Int32>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m42244(__this, ___object, ___method, method) (( void (*) (Func_2_t6857 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7197_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.List`1<System.Int32>,System.Object>::Invoke(T)
#define Func_2_Invoke_m42245(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6857 *, List_1_t744 *, const MethodInfo*))Func_2_Invoke_m30027_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.List`1<System.Int32>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42246(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6857 *, List_1_t744 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30029_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.List`1<System.Int32>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42247(__this, ___result, method) (( Object_t * (*) (Func_2_t6857 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30031_gshared)(__this, ___result, method)
