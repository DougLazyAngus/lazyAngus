#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct Func_2_t7731;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
#include "System_Core_System_Func_2_gen_574MethodDeclarations.h"
#define Func_2__ctor_m52469(__this, ___object, ___method, method) (( void (*) (Func_2_t7731 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m52470_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Invoke(T)
#define Func_2_Invoke_m52471(__this, ___arg1, method) (( KeyValuePair_2_t7245  (*) (Func_2_t7731 *, KeyValuePair_2_t7245 , const MethodInfo*))Func_2_Invoke_m52472_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m52473(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7731 *, KeyValuePair_2_t7245 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m52474_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m52475(__this, ___result, method) (( KeyValuePair_2_t7245  (*) (Func_2_t7731 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m52476_gshared)(__this, ___result, method)
