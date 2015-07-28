﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.UInt64,System.Byte>
struct Func_2_t6328;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.UInt64,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m35470_gshared (Func_2_t6328 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m35470(__this, ___object, ___method, method) (( void (*) (Func_2_t6328 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m35470_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.UInt64,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m35471_gshared (Func_2_t6328 * __this, uint64_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m35471(__this, ___arg1, method) (( uint8_t (*) (Func_2_t6328 *, uint64_t, const MethodInfo*))Func_2_Invoke_m35471_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.UInt64,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m35472_gshared (Func_2_t6328 * __this, uint64_t ___arg1, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m35472(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t6328 *, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m35472_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.UInt64,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m35473_gshared (Func_2_t6328 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m35473(__this, ___result, method) (( uint8_t (*) (Func_2_t6328 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m35473_gshared)(__this, ___result, method)
