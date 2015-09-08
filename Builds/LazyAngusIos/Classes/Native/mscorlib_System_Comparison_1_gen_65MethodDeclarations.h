#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.DateTime>
struct Comparison_1_t7425;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Comparison`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m46563_gshared (Comparison_1_t7425 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m46563(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7425 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m46563_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m46564_gshared (Comparison_1_t7425 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m46564(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7425 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))Comparison_1_Invoke_m46564_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m46565_gshared (Comparison_1_t7425 * __this, DateTime_t287  ___x, DateTime_t287  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m46565(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7425 *, DateTime_t287 , DateTime_t287 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m46565_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m46566_gshared (Comparison_1_t7425 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m46566(__this, ___result, method) (( int32_t (*) (Comparison_1_t7425 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m46566_gshared)(__this, ___result, method)
