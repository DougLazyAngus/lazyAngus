﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.String>
struct Comparison_1_t3363;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.String>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m17535(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3363 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16987_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.String>::Invoke(T,T)
#define Comparison_1_Invoke_m17536(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3363 *, String_t*, String_t*, const MethodInfo*))Comparison_1_Invoke_m16988_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.String>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m17537(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3363 *, String_t*, String_t*, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16989_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.String>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m17538(__this, ___result, method) (( int32_t (*) (Comparison_1_t3363 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16990_gshared)(__this, ___result, method)
