﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Single,System.Int32>
struct Func_2_t6602;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Single,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m38682_gshared (Func_2_t6602 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m38682(__this, ___object, ___method, method) (( void (*) (Func_2_t6602 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38682_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Single,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m38683_gshared (Func_2_t6602 * __this, float ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m38683(__this, ___arg1, method) (( int32_t (*) (Func_2_t6602 *, float, const MethodInfo*))Func_2_Invoke_m38683_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Single,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m38684_gshared (Func_2_t6602 * __this, float ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m38684(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6602 *, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38684_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Single,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m38685_gshared (Func_2_t6602 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m38685(__this, ___result, method) (( int32_t (*) (Func_2_t6602 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38685_gshared)(__this, ___result, method)
