﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt32>
struct Comparison_1_t6530;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m38015_gshared (Comparison_1_t6530 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m38015(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6530 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m38015_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m38016_gshared (Comparison_1_t6530 * __this, uint32_t ___x, uint32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m38016(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6530 *, uint32_t, uint32_t, const MethodInfo*))Comparison_1_Invoke_m38016_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m38017_gshared (Comparison_1_t6530 * __this, uint32_t ___x, uint32_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m38017(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6530 *, uint32_t, uint32_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m38017_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m38018_gshared (Comparison_1_t6530 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m38018(__this, ___result, method) (( int32_t (*) (Comparison_1_t6530 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m38018_gshared)(__this, ___result, method)
