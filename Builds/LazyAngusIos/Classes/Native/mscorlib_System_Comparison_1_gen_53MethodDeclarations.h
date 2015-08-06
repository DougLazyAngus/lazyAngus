#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int16>
struct Comparison_1_t6411;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m36491_gshared (Comparison_1_t6411 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m36491(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6411 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m36491_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int16>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m36492_gshared (Comparison_1_t6411 * __this, int16_t ___x, int16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m36492(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6411 *, int16_t, int16_t, const MethodInfo*))Comparison_1_Invoke_m36492_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m36493_gshared (Comparison_1_t6411 * __this, int16_t ___x, int16_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m36493(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6411 *, int16_t, int16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m36493_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m36494_gshared (Comparison_1_t6411 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m36494(__this, ___result, method) (( int32_t (*) (Comparison_1_t6411 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m36494_gshared)(__this, ___result, method)
