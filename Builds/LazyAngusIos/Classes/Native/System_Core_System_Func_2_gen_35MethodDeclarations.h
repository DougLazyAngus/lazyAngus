#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>
struct Func_2_t1441;
// System.Object
struct Object_t;
// Parse.ParseObject
struct ParseObject_t1170;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1338;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m7360(__this, ___object, ___method, method) (( void (*) (Func_2_t1441 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7225_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::Invoke(T)
#define Func_2_Invoke_m33252(__this, ___arg1, method) (( ParseObject_t1170 * (*) (Func_2_t1441 *, Task_1_t1338 *, const MethodInfo*))Func_2_Invoke_m30058_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m33253(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1441 *, Task_1_t1338 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m30060_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseObject>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m33254(__this, ___result, method) (( ParseObject_t1170 * (*) (Func_2_t1441 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m30062_gshared)(__this, ___result, method)
