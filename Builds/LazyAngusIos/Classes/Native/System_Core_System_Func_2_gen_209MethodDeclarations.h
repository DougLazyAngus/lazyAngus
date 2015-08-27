﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Int64>
struct Func_2_t6690;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.Int64>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m39802_gshared (Func_2_t6690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m39802(__this, ___object, ___method, method) (( void (*) (Func_2_t6690 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m39802_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Int64>::Invoke(T)
extern "C" int64_t Func_2_Invoke_m39803_gshared (Func_2_t6690 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m39803(__this, ___arg1, method) (( int64_t (*) (Func_2_t6690 *, double, const MethodInfo*))Func_2_Invoke_m39803_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Int64>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m39804_gshared (Func_2_t6690 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m39804(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6690 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m39804_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Int64>::EndInvoke(System.IAsyncResult)
extern "C" int64_t Func_2_EndInvoke_m39805_gshared (Func_2_t6690 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m39805(__this, ___result, method) (( int64_t (*) (Func_2_t6690 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m39805_gshared)(__this, ___result, method)
