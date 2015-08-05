#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
struct Comparison_1_t8502;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2834;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m62163(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8502 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21499_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
#define Comparison_1_Invoke_m62164(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8502 *, BaseInvokableCall_t2834 *, BaseInvokableCall_t2834 *, const MethodInfo*))Comparison_1_Invoke_m21500_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m62165(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8502 *, BaseInvokableCall_t2834 *, BaseInvokableCall_t2834 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21501_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m62166(__this, ___result, method) (( int32_t (*) (Comparison_1_t8502 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21502_gshared)(__this, ___result, method)
