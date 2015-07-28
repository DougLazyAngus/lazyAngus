﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct Func_2_t7733;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "System_Core_System_Func_2_gen_489MethodDeclarations.h"
#define Func_2__ctor_m52719(__this, ___object, ___method, method) (( void (*) (Func_2_t7733 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m49130_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::Invoke(T)
#define Func_2_Invoke_m52720(__this, ___arg1, method) (( KeyValuePair_2_t7184  (*) (Func_2_t7733 *, KeyValuePair_2_t6134 , const MethodInfo*))Func_2_Invoke_m49132_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m52721(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7733 *, KeyValuePair_2_t6134 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m49134_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m52722(__this, ___result, method) (( KeyValuePair_2_t7184  (*) (Func_2_t7733 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m49136_gshared)(__this, ___result, method)
