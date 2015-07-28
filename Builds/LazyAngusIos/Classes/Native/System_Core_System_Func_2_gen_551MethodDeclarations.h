﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct Func_2_t7588;
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>>
#include "System_Core_System_Func_2_gen_552MethodDeclarations.h"
#define Func_2__ctor_m50988(__this, ___object, ___method, method) (( void (*) (Func_2_t7588 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m50989_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::Invoke(T)
#define Func_2_Invoke_m50990(__this, ___arg1, method) (( KeyValuePair_2_t7152  (*) (Func_2_t7588 *, KeyValuePair_2_t7174 , const MethodInfo*))Func_2_Invoke_m50991_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m50992(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7588 *, KeyValuePair_2_t7174 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m50993_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m50994(__this, ___result, method) (( KeyValuePair_2_t7152  (*) (Func_2_t7588 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m50995_gshared)(__this, ___result, method)