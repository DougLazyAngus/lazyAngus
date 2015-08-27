﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct Func_2_t7795;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>>
#include "System_Core_System_Func_2_gen_594MethodDeclarations.h"
#define Func_2__ctor_m53281(__this, ___object, ___method, method) (( void (*) (Func_2_t7795 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m53282_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::Invoke(T)
#define Func_2_Invoke_m53283(__this, ___arg1, method) (( KeyValuePair_2_t7263  (*) (Func_2_t7795 *, KeyValuePair_2_t5544 , const MethodInfo*))Func_2_Invoke_m53284_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m53285(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7795 *, KeyValuePair_2_t5544 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m53286_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m53287(__this, ___result, method) (( KeyValuePair_2_t7263  (*) (Func_2_t7795 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m53288_gshared)(__this, ___result, method)
