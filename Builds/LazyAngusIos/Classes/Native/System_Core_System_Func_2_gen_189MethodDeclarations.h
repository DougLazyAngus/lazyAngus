﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Int16,System.UInt32>
struct Func_2_t6538;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Int16,System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m38132_gshared (Func_2_t6538 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m38132(__this, ___object, ___method, method) (( void (*) (Func_2_t6538 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m38132_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Int16,System.UInt32>::Invoke(T)
extern "C" uint32_t Func_2_Invoke_m38133_gshared (Func_2_t6538 * __this, int16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m38133(__this, ___arg1, method) (( uint32_t (*) (Func_2_t6538 *, int16_t, const MethodInfo*))Func_2_Invoke_m38133_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Int16,System.UInt32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m38134_gshared (Func_2_t6538 * __this, int16_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m38134(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6538 *, int16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m38134_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Int16,System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" uint32_t Func_2_EndInvoke_m38135_gshared (Func_2_t6538 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m38135(__this, ___result, method) (( uint32_t (*) (Func_2_t6538 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m38135_gshared)(__this, ___result, method)