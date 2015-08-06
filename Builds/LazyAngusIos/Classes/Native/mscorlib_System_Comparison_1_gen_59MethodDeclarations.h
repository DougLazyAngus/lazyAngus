#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.DateTime>
struct Comparison_1_t6776;
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
extern "C" void Comparison_1__ctor_m41151_gshared (Comparison_1_t6776 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m41151(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6776 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m41151_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.DateTime>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m41152_gshared (Comparison_1_t6776 * __this, DateTime_t287  ___x, DateTime_t287  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m41152(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6776 *, DateTime_t287 , DateTime_t287 , const MethodInfo*))Comparison_1_Invoke_m41152_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.DateTime>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m41153_gshared (Comparison_1_t6776 * __this, DateTime_t287  ___x, DateTime_t287  ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m41153(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6776 *, DateTime_t287 , DateTime_t287 , AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m41153_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m41154_gshared (Comparison_1_t6776 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m41154(__this, ___result, method) (( int32_t (*) (Comparison_1_t6776 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m41154_gshared)(__this, ___result, method)
