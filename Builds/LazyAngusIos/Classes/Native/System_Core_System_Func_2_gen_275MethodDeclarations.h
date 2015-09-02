#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.IList`1<System.Boolean>,System.Object>
struct Func_2_t6920;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Boolean>
struct IList_1_t6342;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.IList`1<System.Boolean>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m42734(__this, ___object, ___method, method) (( void (*) (Func_2_t6920 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7622_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.IList`1<System.Boolean>,System.Object>::Invoke(T)
#define Func_2_Invoke_m42735(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6920 *, Object_t*, const MethodInfo*))Func_2_Invoke_m31187_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.IList`1<System.Boolean>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42736(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6920 *, Object_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m31189_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.IList`1<System.Boolean>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42737(__this, ___result, method) (( Object_t * (*) (Func_2_t6920 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m31191_gshared)(__this, ___result, method)
