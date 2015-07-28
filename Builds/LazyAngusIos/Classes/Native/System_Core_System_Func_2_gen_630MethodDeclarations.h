#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Func_2_t7785;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Double>>
#include "System_Core_System_Func_2_gen_631MethodDeclarations.h"
#define Func_2__ctor_m53502(__this, ___object, ___method, method) (( void (*) (Func_2_t7785 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m53503_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(T)
#define Func_2_Invoke_m53504(__this, ___arg1, method) (( KeyValuePair_2_t6994  (*) (Func_2_t7785 *, KeyValuePair_2_t5488 , const MethodInfo*))Func_2_Invoke_m53505_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m53506(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7785 *, KeyValuePair_2_t5488 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m53507_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m53508(__this, ___result, method) (( KeyValuePair_2_t6994  (*) (Func_2_t7785 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m53509_gshared)(__this, ___result, method)
