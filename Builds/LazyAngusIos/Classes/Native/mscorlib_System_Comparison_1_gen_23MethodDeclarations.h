#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Single>
struct Comparison_1_t3609;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m21528_gshared (Comparison_1_t3609 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m21528(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3609 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21528_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Single>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m21529_gshared (Comparison_1_t3609 * __this, float ___x, float ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m21529(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3609 *, float, float, const MethodInfo*))Comparison_1_Invoke_m21529_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Single>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m21530_gshared (Comparison_1_t3609 * __this, float ___x, float ___y, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m21530(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3609 *, float, float, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21530_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m21531_gshared (Comparison_1_t3609 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m21531(__this, ___result, method) (( int32_t (*) (Comparison_1_t3609 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21531_gshared)(__this, ___result, method)
