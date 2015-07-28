#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>
struct Comparison_1_t8272;
// System.Object
struct Object_t;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1109;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m59145(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8272 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>::Invoke(T,T)
#define Comparison_1_Invoke_m59146(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8272 *, Action_1_t1109 *, Action_1_t1109 *, const MethodInfo*))Comparison_1_Invoke_m21430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m59147(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8272 *, Action_1_t1109 *, Action_1_t1109 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Action`1<System.Threading.Tasks.Task>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m59148(__this, ___result, method) (( int32_t (*) (Comparison_1_t8272 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21432_gshared)(__this, ___result, method)
