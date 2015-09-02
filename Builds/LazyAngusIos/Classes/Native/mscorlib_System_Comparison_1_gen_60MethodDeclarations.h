#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.UInt16>
struct Comparison_1_t6566;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m38211_gshared (Comparison_1_t6566 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m38211(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6566 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m38211_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.UInt16>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m38212_gshared (Comparison_1_t6566 * __this, uint16_t ___x, uint16_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m38212(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6566 *, uint16_t, uint16_t, const MethodInfo*))Comparison_1_Invoke_m38212_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.UInt16>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m38213_gshared (Comparison_1_t6566 * __this, uint16_t ___x, uint16_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m38213(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6566 *, uint16_t, uint16_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m38213_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m38214_gshared (Comparison_1_t6566 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m38214(__this, ___result, method) (( int32_t (*) (Comparison_1_t6566 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m38214_gshared)(__this, ___result, method)
