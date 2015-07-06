﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Single>
struct Comparison_1_t3591;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21393_gshared (Comparison_1_t3591 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21393(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3591 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21393_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Single>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21394_gshared (Comparison_1_t3591 * __this, float ___x, float ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21394(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3591 *, float, float, const MethodInfo*))Comparison_1_Invoke_m21394_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21395_gshared (Comparison_1_t3591 * __this, float ___x, float ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21395(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3591 *, float, float, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21395_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21396_gshared (Comparison_1_t3591 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21396(__this, ___result, method) (( int32_t (*) (Comparison_1_t3591 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21396_gshared)(__this, ___result, method)
