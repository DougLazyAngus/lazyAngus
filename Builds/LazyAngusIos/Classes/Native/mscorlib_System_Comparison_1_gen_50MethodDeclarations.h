﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t6088;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1442;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m32136(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6088 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21770_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::Invoke(T,T)
#define Comparison_1_Invoke_m32137(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6088 *, Tuple_2_t1442 *, Tuple_2_t1442 *, const MethodInfo*))Comparison_1_Invoke_m21771_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m32138(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6088 *, Tuple_2_t1442 *, Tuple_2_t1442 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21772_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m32139(__this, ___result, method) (( int32_t (*) (Comparison_1_t6088 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21773_gshared)(__this, ___result, method)
