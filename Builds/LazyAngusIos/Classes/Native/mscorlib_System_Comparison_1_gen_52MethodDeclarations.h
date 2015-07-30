#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.SByte>
struct Comparison_1_t6362;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.SByte>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m35892_gshared (Comparison_1_t6362 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m35892(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6362 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m35892_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.SByte>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m35893_gshared (Comparison_1_t6362 * __this, int8_t ___x, int8_t ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m35893(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6362 *, int8_t, int8_t, const MethodInfo*))Comparison_1_Invoke_m35893_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.SByte>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m35894_gshared (Comparison_1_t6362 * __this, int8_t ___x, int8_t ___y, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m35894(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6362 *, int8_t, int8_t, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m35894_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.SByte>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m35895_gshared (Comparison_1_t6362 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m35895(__this, ___result, method) (( int32_t (*) (Comparison_1_t6362 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m35895_gshared)(__this, ___result, method)
