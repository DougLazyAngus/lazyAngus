#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.List`1<Parse.ParseObject>,System.Object>
struct Func_2_t7533;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<Parse.ParseObject>
struct List_1_t1292;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Collections.Generic.List`1<Parse.ParseObject>,System.Object>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_18MethodDeclarations.h"
#define Func_2__ctor_m47969(__this, ___object, ___method, method) (( void (*) (Func_2_t7533 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m7697_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.List`1<Parse.ParseObject>,System.Object>::Invoke(T)
#define Func_2_Invoke_m47970(__this, ___arg1, method) (( Object_t * (*) (Func_2_t7533 *, List_1_t1292 *, const MethodInfo*))Func_2_Invoke_m35492_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.List`1<Parse.ParseObject>,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47971(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7533 *, List_1_t1292 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35494_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.List`1<Parse.ParseObject>,System.Object>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47972(__this, ___result, method) (( Object_t * (*) (Func_2_t7533 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35496_gshared)(__this, ___result, method)
