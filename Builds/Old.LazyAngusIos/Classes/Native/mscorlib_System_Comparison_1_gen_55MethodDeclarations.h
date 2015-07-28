﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t4130;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2646;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m28235(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4130 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16987_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Security.Policy.StrongName>::Invoke(T,T)
#define Comparison_1_Invoke_m28236(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4130 *, StrongName_t2646 *, StrongName_t2646 *, const MethodInfo*))Comparison_1_Invoke_m16988_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Security.Policy.StrongName>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m28237(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4130 *, StrongName_t2646 *, StrongName_t2646 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16989_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m28238(__this, ___result, method) (( int32_t (*) (Comparison_1_t4130 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16990_gshared)(__this, ___result, method)