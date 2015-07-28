﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>
struct Comparison_1_t8545;
// System.Object
struct Object_t;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t3296;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m62867(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8545 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>::Invoke(T,T)
#define Comparison_1_Invoke_m62868(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8545 *, AdjustmentRule_t3296 *, AdjustmentRule_t3296 *, const MethodInfo*))Comparison_1_Invoke_m21430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m62869(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8545 *, AdjustmentRule_t3296 *, AdjustmentRule_t3296 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m62870(__this, ___result, method) (( int32_t (*) (Comparison_1_t8545 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21432_gshared)(__this, ___result, method)