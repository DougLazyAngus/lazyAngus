#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Exception>
struct Comparison_1_t8253;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t57;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Exception>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m58893(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8253 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Exception>::Invoke(T,T)
#define Comparison_1_Invoke_m58894(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8253 *, Exception_t57 *, Exception_t57 *, const MethodInfo*))Comparison_1_Invoke_m21430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Exception>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m58895(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8253 *, Exception_t57 *, Exception_t57 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Exception>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m58896(__this, ___result, method) (( int32_t (*) (Comparison_1_t8253 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21432_gshared)(__this, ___result, method)
