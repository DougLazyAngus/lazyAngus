﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Comparison_1_t4101;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m28391_gshared (Comparison_1_t4101 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m28391(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4101 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m28391_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m28392_gshared (Comparison_1_t4101 * __this, KeyValuePair_2_t40  ___x, KeyValuePair_2_t40  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m28392(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4101 *, KeyValuePair_2_t40 , KeyValuePair_2_t40 , const MethodInfo*))Comparison_1_Invoke_m28392_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m28393_gshared (Comparison_1_t4101 * __this, KeyValuePair_2_t40  ___x, KeyValuePair_2_t40  ___y, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m28393(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4101 *, KeyValuePair_2_t40 , KeyValuePair_2_t40 , AsyncCallback_t344 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m28393_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m28394_gshared (Comparison_1_t4101 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m28394(__this, ___result, method) (( int32_t (*) (Comparison_1_t4101 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m28394_gshared)(__this, ___result, method)
