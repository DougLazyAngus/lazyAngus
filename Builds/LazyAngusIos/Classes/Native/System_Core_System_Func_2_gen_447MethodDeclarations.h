﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct Func_2_t7313;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
#include "System_Core_System_Func_2_gen_448MethodDeclarations.h"
#define Func_2__ctor_m47708(__this, ___object, ___method, method) (( void (*) (Func_2_t7313 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47709_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::Invoke(T)
#define Func_2_Invoke_m47710(__this, ___arg1, method) (( KeyValuePair_2_t7113  (*) (Func_2_t7313 *, KeyValuePair_2_t7135 , const MethodInfo*))Func_2_Invoke_m47711_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m47712(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7313 *, KeyValuePair_2_t7135 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47713_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m47714(__this, ___result, method) (( KeyValuePair_2_t7113  (*) (Func_2_t7313 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47715_gshared)(__this, ___result, method)
