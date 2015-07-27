#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int32>
struct Comparison_1_t3661;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t343;
// System.AsyncCallback
struct AsyncCallback_t344;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m22277_gshared (Comparison_1_t3661 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m22277(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3661 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m22277_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int32>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m22278_gshared (Comparison_1_t3661 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m22278(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3661 *, int32_t, int32_t, const MethodInfo*))Comparison_1_Invoke_m22278_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int32>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m22279_gshared (Comparison_1_t3661 * __this, int32_t ___x, int32_t ___y, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m22279(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3661 *, int32_t, int32_t, AsyncCallback_t344 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m22279_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m22280_gshared (Comparison_1_t3661 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m22280(__this, ___result, method) (( int32_t (*) (Comparison_1_t3661 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m22280_gshared)(__this, ___result, method)
