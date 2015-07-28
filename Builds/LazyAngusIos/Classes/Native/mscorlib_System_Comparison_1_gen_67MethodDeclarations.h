﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t7220;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Comparison_1_gen_66MethodDeclarations.h"
#define Comparison_1__ctor_m46455(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7220 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m46352_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T,T)
#define Comparison_1_Invoke_m46456(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7220 *, KeyValuePair_2_t7101 , KeyValuePair_2_t7101 , const MethodInfo*))Comparison_1_Invoke_m46353_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m46457(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7220 *, KeyValuePair_2_t7101 , KeyValuePair_2_t7101 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m46354_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m46458(__this, ___result, method) (( int32_t (*) (Comparison_1_t7220 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m46355_gshared)(__this, ___result, method)