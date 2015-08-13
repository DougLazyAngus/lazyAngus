#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct Func_2_t7335;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_47.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "System_Core_System_Func_2_gen_424MethodDeclarations.h"
#define Func_2__ctor_m47706(__this, ___object, ___method, method) (( void (*) (Func_2_t7335 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47684_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Invoke(T)
#define Func_2_Invoke_m47707(__this, ___arg1, method) (( KeyValuePair_2_t6215  (*) (Func_2_t7335 *, KeyValuePair_2_t7245 , const MethodInfo*))Func_2_Invoke_m47686_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47708(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7335 *, KeyValuePair_2_t7245 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47688_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47709(__this, ___result, method) (( KeyValuePair_2_t6215  (*) (Func_2_t7335 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47690_gshared)(__this, ___result, method)
