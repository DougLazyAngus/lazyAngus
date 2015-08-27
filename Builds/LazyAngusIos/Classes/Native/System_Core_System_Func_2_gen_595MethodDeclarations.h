#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Func_2_t7799;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "System_Core_System_Func_2_gen_596MethodDeclarations.h"
#define Func_2__ctor_m53324(__this, ___object, ___method, method) (( void (*) (Func_2_t7799 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m53325_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T)
#define Func_2_Invoke_m53326(__this, ___arg1, method) (( KeyValuePair_2_t7263  (*) (Func_2_t7799 *, KeyValuePair_2_t7241 , const MethodInfo*))Func_2_Invoke_m53327_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m53328(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7799 *, KeyValuePair_2_t7241 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m53329_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m53330(__this, ___result, method) (( KeyValuePair_2_t7263  (*) (Func_2_t7799 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m53331_gshared)(__this, ___result, method)
