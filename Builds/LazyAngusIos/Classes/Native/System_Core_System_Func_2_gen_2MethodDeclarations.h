﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
struct Func_2_t3407;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m17859_gshared (Func_2_t3407 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m17859(__this, ___object, ___method, method) (( void (*) (Func_2_t3407 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m17859_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m17861_gshared (Func_2_t3407 * __this, KeyValuePair_2_t40  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m17861(__this, ___arg1, method) (( uint8_t (*) (Func_2_t3407 *, KeyValuePair_2_t40 , const MethodInfo*))Func_2_Invoke_m17861_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m17863_gshared (Func_2_t3407 * __this, KeyValuePair_2_t40  ___arg1, AsyncCallback_t346 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m17863(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3407 *, KeyValuePair_2_t40 , AsyncCallback_t346 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m17863_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m17865_gshared (Func_2_t3407 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m17865(__this, ___result, method) (( uint8_t (*) (Func_2_t3407 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m17865_gshared)(__this, ___result, method)
