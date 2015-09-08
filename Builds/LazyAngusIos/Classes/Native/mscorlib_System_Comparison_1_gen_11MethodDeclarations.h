#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<GPScore>
struct Comparison_1_t6102;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t343;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<GPScore>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m28454(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6102 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m26101_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<GPScore>::Invoke(T,T)
#define Comparison_1_Invoke_m28455(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6102 *, GPScore_t343 *, GPScore_t343 *, const MethodInfo*))Comparison_1_Invoke_m26102_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<GPScore>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m28456(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6102 *, GPScore_t343 *, GPScore_t343 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26103_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<GPScore>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m28457(__this, ___result, method) (( int32_t (*) (Comparison_1_t6102 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26104_gshared)(__this, ___result, method)
