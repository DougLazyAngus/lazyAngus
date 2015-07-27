#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t4089;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1261;
// System.IAsyncResult
struct IAsyncResult_t345;
// System.AsyncCallback
struct AsyncCallback_t346;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m28229(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4089 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17575_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m28230(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4089 *, BaseInvokableCall_t1261 *, BaseInvokableCall_t1261 *, const MethodInfo*))Comparison_1_Invoke_m17576_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m28231(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4089 *, BaseInvokableCall_t1261 *, BaseInvokableCall_t1261 *, AsyncCallback_t346 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17577_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m28232(__this, ___result, method) (( int32_t (*) (Comparison_1_t4089 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17578_gshared)(__this, ___result, method)
