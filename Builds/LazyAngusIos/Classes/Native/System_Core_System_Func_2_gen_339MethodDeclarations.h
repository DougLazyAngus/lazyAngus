#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>
struct Func_2_t7019;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,System.DateTime>
struct IDictionary_2_t7020;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m44189(__this, ___object, ___method, method) (( void (*) (Func_2_t7019 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7458_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::Invoke(T)
#define Func_2_Invoke_m44190(__this, ___arg1, method) (( Object_t * (*) (Func_2_t7019 *, Object_t*, const MethodInfo*))Func_2_Invoke_m30823_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m44191(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7019 *, Object_t*, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30825_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.IDictionary`2<System.String,System.DateTime>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m44192(__this, ___result, method) (( Object_t * (*) (Func_2_t7019 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30827_gshared)(__this, ___result, method)
