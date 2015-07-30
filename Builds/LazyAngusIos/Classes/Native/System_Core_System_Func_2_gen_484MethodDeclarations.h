#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct Func_2_t7410;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_56.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
#include "System_Core_System_Func_2_gen_485MethodDeclarations.h"
#define Func_2__ctor_m48814(__this, ___object, ___method, method) (( void (*) (Func_2_t7410 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m48815_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::Invoke(T)
#define Func_2_Invoke_m48816(__this, ___arg1, method) (( KeyValuePair_2_t7131  (*) (Func_2_t7410 *, KeyValuePair_2_t6981 , const MethodInfo*))Func_2_Invoke_m48817_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m48818(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7410 *, KeyValuePair_2_t6981 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m48819_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m48820(__this, ___result, method) (( KeyValuePair_2_t7131  (*) (Func_2_t7410 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m48821_gshared)(__this, ___result, method)
