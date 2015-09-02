#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseObject,System.Object>
struct Func_2_t6212;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1238;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseObject,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m33607(__this, ___object, ___method, method) (( void (*) (Func_2_t6212 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7622_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<Parse.ParseObject,System.Object>::Invoke(T)
#define Func_2_Invoke_m33608(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6212 *, ParseObject_t1238 *, const MethodInfo*))Func_2_Invoke_m31187_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<Parse.ParseObject,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33609(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6212 *, ParseObject_t1238 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m31189_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<Parse.ParseObject,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33610(__this, ___result, method) (( Object_t * (*) (Func_2_t6212 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m31191_gshared)(__this, ___result, method)
