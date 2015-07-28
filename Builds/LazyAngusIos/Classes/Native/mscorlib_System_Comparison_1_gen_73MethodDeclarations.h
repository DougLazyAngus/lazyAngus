﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Comparison_1_t7427;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_71.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Comparison_1_gen_72MethodDeclarations.h"
#define Comparison_1__ctor_m49078(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7427 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m48975_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Invoke(T,T)
#define Comparison_1_Invoke_m49079(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7427 *, KeyValuePair_2_t7134 , KeyValuePair_2_t7134 , const MethodInfo*))Comparison_1_Invoke_m48976_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m49080(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7427 *, KeyValuePair_2_t7134 , KeyValuePair_2_t7134 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m48977_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m49081(__this, ___result, method) (( int32_t (*) (Comparison_1_t7427 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m48978_gshared)(__this, ___result, method)