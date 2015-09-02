#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,Parse.ParseObject>
struct Func_2_t6886;
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

// System.Void System.Func`2<System.Object,Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m42331(__this, ___object, ___method, method) (( void (*) (Func_2_t6886 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7622_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,Parse.ParseObject>::Invoke(T)
#define Func_2_Invoke_m42332(__this, ___arg1, method) (( ParseObject_t1238 * (*) (Func_2_t6886 *, Object_t *, const MethodInfo*))Func_2_Invoke_m31187_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,Parse.ParseObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m42333(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6886 *, Object_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m31189_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m42334(__this, ___result, method) (( ParseObject_t1238 * (*) (Func_2_t6886 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m31191_gshared)(__this, ___result, method)
