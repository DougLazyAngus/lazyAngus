#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t9145;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2901;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m67582(__this, ___object, ___method, method) (( void (*) (Comparison_1_t9145 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m26101_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m67583(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t9145 *, BaseInvokableCall_t2901 *, BaseInvokableCall_t2901 *, const MethodInfo*))Comparison_1_Invoke_m26102_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m67584(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t9145 *, BaseInvokableCall_t2901 *, BaseInvokableCall_t2901 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26103_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m67585(__this, ___result, method) (( int32_t (*) (Comparison_1_t9145 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26104_gshared)(__this, ___result, method)
