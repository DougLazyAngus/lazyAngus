﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Double,System.Int32>
struct Func_2_t6599;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Double,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m38647_gshared (Func_2_t6599 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m38647(__this, ___object, ___method, method) (( void (*) (Func_2_t6599 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38647_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Double,System.Int32>::Invoke(T)
extern "C" int32_t Func_2_Invoke_m38648_gshared (Func_2_t6599 * __this, double ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m38648(__this, ___arg1, method) (( int32_t (*) (Func_2_t6599 *, double, const MethodInfo*))Func_2_Invoke_m38648_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Double,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m38649_gshared (Func_2_t6599 * __this, double ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m38649(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6599 *, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38649_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Double,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Func_2_EndInvoke_m38650_gshared (Func_2_t6599 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m38650(__this, ___result, method) (( int32_t (*) (Func_2_t6599 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38650_gshared)(__this, ___result, method)
