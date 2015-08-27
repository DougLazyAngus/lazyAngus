﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Comparison_1_t7444;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_69.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m49066_gshared (Comparison_1_t7444 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m49066(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7444 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m49066_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m49067_gshared (Comparison_1_t7444 * __this, KeyValuePair_2_t7210  ___x, KeyValuePair_2_t7210  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m49067(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7444 *, KeyValuePair_2_t7210 , KeyValuePair_2_t7210 , const MethodInfo*))Comparison_1_Invoke_m49067_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m49068_gshared (Comparison_1_t7444 * __this, KeyValuePair_2_t7210  ___x, KeyValuePair_2_t7210  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m49068(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7444 *, KeyValuePair_2_t7210 , KeyValuePair_2_t7210 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m49068_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m49069_gshared (Comparison_1_t7444 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m49069(__this, ___result, method) (( int32_t (*) (Comparison_1_t7444 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m49069_gshared)(__this, ___result, method)
