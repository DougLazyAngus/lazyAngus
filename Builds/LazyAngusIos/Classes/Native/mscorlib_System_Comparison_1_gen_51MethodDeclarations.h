#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t4011;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1205;
// System.IAsyncResult
struct IAsyncResult_t386;
// System.AsyncCallback
struct AsyncCallback_t387;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m27126(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4011 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16962_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m27127(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4011 *, BaseInvokableCall_t1205 *, BaseInvokableCall_t1205 *, const MethodInfo*))Comparison_1_Invoke_m16963_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m27128(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4011 *, BaseInvokableCall_t1205 *, BaseInvokableCall_t1205 *, AsyncCallback_t387 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16964_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m27129(__this, ___result, method) (( int32_t (*) (Comparison_1_t4011 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16965_gshared)(__this, ___result, method)
