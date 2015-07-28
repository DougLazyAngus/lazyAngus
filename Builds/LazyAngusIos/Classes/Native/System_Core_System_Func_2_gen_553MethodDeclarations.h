﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Func_2_t7593;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_73.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_78.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "System_Core_System_Func_2_gen_544MethodDeclarations.h"
#define Func_2__ctor_m51031(__this, ___object, ___method, method) (( void (*) (Func_2_t7593 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50817_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T)
#define Func_2_Invoke_m51032(__this, ___arg1, method) (( KeyValuePair_2_t7153  (*) (Func_2_t7593 *, KeyValuePair_2_t7184 , const MethodInfo*))Func_2_Invoke_m50819_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m51033(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7593 *, KeyValuePair_2_t7184 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50821_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m51034(__this, ___result, method) (( KeyValuePair_2_t7153  (*) (Func_2_t7593 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50823_gshared)(__this, ___result, method)
