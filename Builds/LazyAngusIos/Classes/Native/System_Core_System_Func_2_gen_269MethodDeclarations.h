#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseACL,System.Object>
struct Func_2_t6875;
// System.Object
struct Object_t;
// Parse.ParseACL
struct ParseACL_t1216;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseACL,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m42158(__this, ___object, ___method, method) (( void (*) (Func_2_t6875 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7468_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseACL,System.Object>::Invoke(T)
#define Func_2_Invoke_m42159(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6875 *, ParseACL_t1216 *, const MethodInfo*))Func_2_Invoke_m30731_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseACL,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42160(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6875 *, ParseACL_t1216 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30733_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseACL,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42161(__this, ___result, method) (( Object_t * (*) (Func_2_t6875 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30735_gshared)(__this, ___result, method)
