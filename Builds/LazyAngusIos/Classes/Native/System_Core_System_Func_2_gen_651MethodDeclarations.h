﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct Func_2_t7842;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m54194_gshared (Func_2_t7842 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m54194(__this, ___object, ___method, method) (( void (*) (Func_2_t7842 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m54194_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::Invoke(T)
extern "C" KeyValuePair_2_t6918  Func_2_Invoke_m54196_gshared (Func_2_t7842 * __this, KeyValuePair_2_t7121  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m54196(__this, ___arg1, method) (( KeyValuePair_2_t6918  (*) (Func_2_t7842 *, KeyValuePair_2_t7121 , const MethodInfo*))Func_2_Invoke_m54196_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m54198_gshared (Func_2_t7842 * __this, KeyValuePair_2_t7121  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m54198(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7842 *, KeyValuePair_2_t7121 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m54198_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6918  Func_2_EndInvoke_m54200_gshared (Func_2_t7842 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m54200(__this, ___result, method) (( KeyValuePair_2_t6918  (*) (Func_2_t7842 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m54200_gshared)(__this, ___result, method)