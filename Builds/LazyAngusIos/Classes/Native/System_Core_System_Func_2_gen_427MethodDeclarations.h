﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct Func_2_t7349;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_77.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m47872_gshared (Func_2_t7349 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m47872(__this, ___object, ___method, method) (( void (*) (Func_2_t7349 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m47872_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(T)
extern "C" KeyValuePair_2_t6189  Func_2_Invoke_m47874_gshared (Func_2_t7349 * __this, KeyValuePair_2_t7261  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m47874(__this, ___arg1, method) (( KeyValuePair_2_t6189  (*) (Func_2_t7349 *, KeyValuePair_2_t7261 , const MethodInfo*))Func_2_Invoke_m47874_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m47876_gshared (Func_2_t7349 * __this, KeyValuePair_2_t7261  ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m47876(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t7349 *, KeyValuePair_2_t7261 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m47876_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt64>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t6189  Func_2_EndInvoke_m47878_gshared (Func_2_t7349 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m47878(__this, ___result, method) (( KeyValuePair_2_t6189  (*) (Func_2_t7349 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m47878_gshared)(__this, ___result, method)
