﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct Comparison_1_t7485;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m49752_gshared (Comparison_1_t7485 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m49752(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7485 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m49752_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m49753_gshared (Comparison_1_t7485 * __this, KeyValuePair_2_t5476  ___x, KeyValuePair_2_t5476  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m49753(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7485 *, KeyValuePair_2_t5476 , KeyValuePair_2_t5476 , const MethodInfo*))Comparison_1_Invoke_m49753_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m49754_gshared (Comparison_1_t7485 * __this, KeyValuePair_2_t5476  ___x, KeyValuePair_2_t5476  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m49754(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7485 *, KeyValuePair_2_t5476 , KeyValuePair_2_t5476 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m49754_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m49755_gshared (Comparison_1_t7485 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m49755(__this, ___result, method) (( int32_t (*) (Comparison_1_t7485 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m49755_gshared)(__this, ___result, method)