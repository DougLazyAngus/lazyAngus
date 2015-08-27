﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt64,System.Object>
struct Func_2_t6356;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt64,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m35598_gshared (Func_2_t6356 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m35598(__this, ___object, ___method, method) (( void (*) (Func_2_t6356 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35598_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt64,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m35599_gshared (Func_2_t6356 * __this, uint64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m35599(__this, ___arg1, method) (( Object_t * (*) (Func_2_t6356 *, uint64_t, const MethodInfo*))Func_2_Invoke_m35599_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt64,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m35600_gshared (Func_2_t6356 * __this, uint64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m35600(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6356 *, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35600_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt64,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m35601_gshared (Func_2_t6356 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m35601(__this, ___result, method) (( Object_t * (*) (Func_2_t6356 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35601_gshared)(__this, ___result, method)
