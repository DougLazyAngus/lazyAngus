﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>
struct Comparison_1_t7379;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_67.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m48289_gshared (Comparison_1_t7379 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m48289(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7379 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m48289_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m48290_gshared (Comparison_1_t7379 * __this, KeyValuePair_2_t7199  ___x, KeyValuePair_2_t7199  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m48290(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7379 *, KeyValuePair_2_t7199 , KeyValuePair_2_t7199 , const MethodInfo*))Comparison_1_Invoke_m48290_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m48291_gshared (Comparison_1_t7379 * __this, KeyValuePair_2_t7199  ___x, KeyValuePair_2_t7199  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m48291(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7379 *, KeyValuePair_2_t7199 , KeyValuePair_2_t7199 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m48291_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.SByte>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m48292_gshared (Comparison_1_t7379 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m48292(__this, ___result, method) (( int32_t (*) (Comparison_1_t7379 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m48292_gshared)(__this, ___result, method)
