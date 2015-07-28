﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Func_2_t7511;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "System_Core_System_Func_2_gen_522MethodDeclarations.h"
#define Func_2__ctor_m50082(__this, ___object, ___method, method) (( void (*) (Func_2_t7511 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50083_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T)
#define Func_2_Invoke_m50084(__this, ___arg1, method) (( KeyValuePair_2_t5487  (*) (Func_2_t7511 *, KeyValuePair_2_t5487 , const MethodInfo*))Func_2_Invoke_m50085_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m50086(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7511 *, KeyValuePair_2_t5487 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50087_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m50088(__this, ___result, method) (( KeyValuePair_2_t5487  (*) (Func_2_t7511 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50089_gshared)(__this, ___result, method)