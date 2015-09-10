#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t6360;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t786;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m32618(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6360 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m26158_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Component>::Invoke(T,T)
#define Comparison_1_Invoke_m32619(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6360 *, Component_t786 *, Component_t786 *, const MethodInfo*))Comparison_1_Invoke_m26159_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Component>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m32620(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6360 *, Component_t786 *, Component_t786 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m26160_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m32621(__this, ___result, method) (( int32_t (*) (Comparison_1_t6360 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m26161_gshared)(__this, ___result, method)
