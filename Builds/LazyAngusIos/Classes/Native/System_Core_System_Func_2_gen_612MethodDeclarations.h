#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct Func_2_t7819;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_79.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "System_Core_System_Func_2_gen_498MethodDeclarations.h"
#define Func_2__ctor_m53586(__this, ___object, ___method, method) (( void (*) (Func_2_t7819 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50053_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::Invoke(T)
#define Func_2_Invoke_m53587(__this, ___arg1, method) (( KeyValuePair_2_t7265  (*) (Func_2_t7819 *, KeyValuePair_2_t5543 , const MethodInfo*))Func_2_Invoke_m50055_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m53588(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7819 *, KeyValuePair_2_t5543 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50057_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m53589(__this, ___result, method) (( KeyValuePair_2_t7265  (*) (Func_2_t7819 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50059_gshared)(__this, ___result, method)
