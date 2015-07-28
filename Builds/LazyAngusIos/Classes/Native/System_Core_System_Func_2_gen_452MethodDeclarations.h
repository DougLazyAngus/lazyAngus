﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Func_2_t7322;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_66.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_72.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m47795_gshared (Func_2_t7322 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m47795(__this, ___object, ___method, method) (( void (*) (Func_2_t7322 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47795_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T)
extern "C" KeyValuePair_2_t7111  Func_2_Invoke_m47797_gshared (Func_2_t7322 * __this, KeyValuePair_2_t7151  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m47797(__this, ___arg1, method) (( KeyValuePair_2_t7111  (*) (Func_2_t7322 *, KeyValuePair_2_t7151 , const MethodInfo*))Func_2_Invoke_m47797_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m47799_gshared (Func_2_t7322 * __this, KeyValuePair_2_t7151  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m47799(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7322 *, KeyValuePair_2_t7151 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47799_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7111  Func_2_EndInvoke_m47801_gshared (Func_2_t7322 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m47801(__this, ___result, method) (( KeyValuePair_2_t7111  (*) (Func_2_t7322 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47801_gshared)(__this, ___result, method)
