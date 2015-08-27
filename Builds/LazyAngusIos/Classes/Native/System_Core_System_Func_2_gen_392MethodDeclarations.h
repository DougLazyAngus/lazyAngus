﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct Func_2_t7249;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_76.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "System_Core_System_Func_2_gen_393MethodDeclarations.h"
#define Func_2__ctor_m46809(__this, ___object, ___method, method) (( void (*) (Func_2_t7249 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m46810_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Invoke(T)
#define Func_2_Invoke_m46811(__this, ___arg1, method) (( KeyValuePair_2_t778  (*) (Func_2_t7249 *, KeyValuePair_2_t7252 , const MethodInfo*))Func_2_Invoke_m46812_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m46813(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7249 *, KeyValuePair_2_t7252 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m46814_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>,System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m46815(__this, ___result, method) (( KeyValuePair_2_t778  (*) (Func_2_t7249 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m46816_gshared)(__this, ___result, method)
