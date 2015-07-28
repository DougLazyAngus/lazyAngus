#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Func_2_t7390;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "System_Core_System_Func_2_gen_478MethodDeclarations.h"
#define Func_2__ctor_m48614(__this, ___object, ___method, method) (( void (*) (Func_2_t7390 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m48615_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Invoke(T)
#define Func_2_Invoke_m48616(__this, ___arg1, method) (( KeyValuePair_2_t7124  (*) (Func_2_t7390 *, KeyValuePair_2_t7164 , const MethodInfo*))Func_2_Invoke_m48617_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m48618(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7390 *, KeyValuePair_2_t7164 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m48619_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m48620(__this, ___result, method) (( KeyValuePair_2_t7124  (*) (Func_2_t7390 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m48621_gshared)(__this, ___result, method)
