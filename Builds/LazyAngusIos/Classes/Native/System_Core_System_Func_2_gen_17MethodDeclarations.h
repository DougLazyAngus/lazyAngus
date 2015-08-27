﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_t1216;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
#include "System_Core_System_Func_2_gen_68MethodDeclarations.h"
#define Func_2__ctor_m7461(__this, ___object, ___method, method) (( void (*) (Func_2_t1216 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m32222_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::Invoke(T)
#define Func_2_Invoke_m32223(__this, ___arg1, method) (( String_t* (*) (Func_2_t1216 *, KeyValuePair_2_t778 , const MethodInfo*))Func_2_Invoke_m32224_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m32225(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1216 *, KeyValuePair_2_t778 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m32226_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m32227(__this, ___result, method) (( String_t* (*) (Func_2_t1216 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m32228_gshared)(__this, ___result, method)
