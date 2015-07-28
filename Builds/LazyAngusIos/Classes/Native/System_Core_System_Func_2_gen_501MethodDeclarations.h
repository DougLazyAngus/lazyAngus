#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Func_2_t7455;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_75.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "System_Core_System_Func_2_gen_502MethodDeclarations.h"
#define Func_2__ctor_m49391(__this, ___object, ___method, method) (( void (*) (Func_2_t7455 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m49392_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Invoke(T)
#define Func_2_Invoke_m49393(__this, ___arg1, method) (( KeyValuePair_2_t7135  (*) (Func_2_t7455 *, KeyValuePair_2_t7164 , const MethodInfo*))Func_2_Invoke_m49394_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m49395(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7455 *, KeyValuePair_2_t7164 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m49396_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m49397(__this, ___result, method) (( KeyValuePair_2_t7135  (*) (Func_2_t7455 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m49398_gshared)(__this, ___result, method)
