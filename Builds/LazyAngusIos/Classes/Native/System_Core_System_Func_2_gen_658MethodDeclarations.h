#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct Func_2_t7946;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
#include "System_Core_System_Func_2_gen_659MethodDeclarations.h"
#define Func_2__ctor_m55233(__this, ___object, ___method, method) (( void (*) (Func_2_t7946 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m55234_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::Invoke(T)
#define Func_2_Invoke_m55235(__this, ___arg1, method) (( KeyValuePair_2_t7062  (*) (Func_2_t7946 *, KeyValuePair_2_t7252 , const MethodInfo*))Func_2_Invoke_m55236_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m55237(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7946 *, KeyValuePair_2_t7252 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m55238_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m55239(__this, ___result, method) (( KeyValuePair_2_t7062  (*) (Func_2_t7946 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m55240_gshared)(__this, ___result, method)
