﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt64>
struct Comparison_1_t6621;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m39170_gshared (Comparison_1_t6621 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m39170(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6621 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m39170_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt64>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m39171_gshared (Comparison_1_t6621 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m39171(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6621 *, uint64_t, uint64_t, const MethodInfo*))Comparison_1_Invoke_m39171_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt64>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m39172_gshared (Comparison_1_t6621 * __this, uint64_t ___x, uint64_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m39172(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6621 *, uint64_t, uint64_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m39172_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m39173_gshared (Comparison_1_t6621 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m39173(__this, ___result, method) (( int32_t (*) (Comparison_1_t6621 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m39173_gshared)(__this, ___result, method)
