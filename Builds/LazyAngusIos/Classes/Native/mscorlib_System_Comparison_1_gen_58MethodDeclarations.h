#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Double>
struct Comparison_1_t6691;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m40083_gshared (Comparison_1_t6691 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m40083(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6691 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m40083_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Double>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m40084_gshared (Comparison_1_t6691 * __this, double ___x, double ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m40084(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6691 *, double, double, const MethodInfo*))Comparison_1_Invoke_m40084_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Double>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m40085_gshared (Comparison_1_t6691 * __this, double ___x, double ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m40085(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6691 *, double, double, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m40085_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m40086_gshared (Comparison_1_t6691 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m40086(__this, ___result, method) (( int32_t (*) (Comparison_1_t6691 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m40086_gshared)(__this, ___result, method)
