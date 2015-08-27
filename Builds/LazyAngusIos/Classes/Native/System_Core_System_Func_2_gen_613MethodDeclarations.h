﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct Func_2_t7827;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_74.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "System_Core_System_Func_2_gen_500MethodDeclarations.h"
#define Func_2__ctor_m53731(__this, ___object, ___method, method) (( void (*) (Func_2_t7827 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50217_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::Invoke(T)
#define Func_2_Invoke_m53732(__this, ___arg1, method) (( KeyValuePair_2_t7272  (*) (Func_2_t7827 *, KeyValuePair_2_t7241 , const MethodInfo*))Func_2_Invoke_m50219_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m53733(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7827 *, KeyValuePair_2_t7241 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50221_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m53734(__this, ___result, method) (( KeyValuePair_2_t7272  (*) (Func_2_t7827 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50223_gshared)(__this, ___result, method)
