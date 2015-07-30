#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Int16>
struct Comparison_1_t6409;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Int16>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m36475_gshared (Comparison_1_t6409 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m36475(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6409 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m36475_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Int16>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m36476_gshared (Comparison_1_t6409 * __this, int16_t ___x, int16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m36476(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6409 *, int16_t, int16_t, const MethodInfo*))Comparison_1_Invoke_m36476_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Int16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m36477_gshared (Comparison_1_t6409 * __this, int16_t ___x, int16_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m36477(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6409 *, int16_t, int16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m36477_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Int16>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m36478_gshared (Comparison_1_t6409 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m36478(__this, ___result, method) (( int32_t (*) (Comparison_1_t6409 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m36478_gshared)(__this, ___result, method)
