﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int32,System.Int64>
struct Func_2_t6677;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int32,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39642_gshared (Func_2_t6677 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m39642(__this, ___object, ___method, method) (( void (*) (Func_2_t6677 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39642_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int32,System.Int64>::Invoke(T)
extern "C" int64_t Func_2_Invoke_m39643_gshared (Func_2_t6677 * __this, int32_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m39643(__this, ___arg1, method) (( int64_t (*) (Func_2_t6677 *, int32_t, const MethodInfo*))Func_2_Invoke_m39643_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int32,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m39644_gshared (Func_2_t6677 * __this, int32_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m39644(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6677 *, int32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39644_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int32,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Func_2_EndInvoke_m39645_gshared (Func_2_t6677 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m39645(__this, ___result, method) (( int64_t (*) (Func_2_t6677 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39645_gshared)(__this, ___result, method)
