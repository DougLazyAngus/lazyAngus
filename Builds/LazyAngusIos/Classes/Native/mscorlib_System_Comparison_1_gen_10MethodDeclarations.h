#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<GPScore>
struct Comparison_1_t3458;
// System.Object
struct Object_t;
// GPScore
struct GPScore_t275;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<GPScore>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m18928(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3458 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17023_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<GPScore>::Invoke(T,T)
#define Comparison_1_Invoke_m18929(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3458 *, GPScore_t275 *, GPScore_t275 *, const MethodInfo*))Comparison_1_Invoke_m17024_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<GPScore>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m18930(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3458 *, GPScore_t275 *, GPScore_t275 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17025_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<GPScore>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m18931(__this, ___result, method) (( int32_t (*) (Comparison_1_t3458 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17026_gshared)(__this, ___result, method)
