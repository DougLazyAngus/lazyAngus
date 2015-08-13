#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t8573;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2883;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m62840(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8573 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21751_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m62841(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8573 *, BaseInvokableCall_t2883 *, BaseInvokableCall_t2883 *, const MethodInfo*))Comparison_1_Invoke_m21752_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m62842(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8573 *, BaseInvokableCall_t2883 *, BaseInvokableCall_t2883 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21753_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m62843(__this, ___result, method) (( int32_t (*) (Comparison_1_t8573 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21754_gshared)(__this, ___result, method)
