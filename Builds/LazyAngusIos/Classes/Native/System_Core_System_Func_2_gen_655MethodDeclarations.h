﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Func_2_t7939;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_53.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m55148_gshared (Func_2_t7939 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m55148(__this, ___object, ___method, method) (( void (*) (Func_2_t7939 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m55148_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C" KeyValuePair_2_t7007  Func_2_Invoke_m55150_gshared (Func_2_t7939 * __this, KeyValuePair_2_t5533  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m55150(__this, ___arg1, method) (( KeyValuePair_2_t7007  (*) (Func_2_t7939 *, KeyValuePair_2_t5533 , const MethodInfo*))Func_2_Invoke_m55150_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m55152_gshared (Func_2_t7939 * __this, KeyValuePair_2_t5533  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m55152(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7939 *, KeyValuePair_2_t5533 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m55152_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t7007  Func_2_EndInvoke_m55154_gshared (Func_2_t7939 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m55154(__this, ___result, method) (( KeyValuePair_2_t7007  (*) (Func_2_t7939 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m55154_gshared)(__this, ___result, method)
