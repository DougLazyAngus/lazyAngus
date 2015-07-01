#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t3602;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t555;
// System.IAsyncResult
struct IAsyncResult_t388;
// System.AsyncCallback
struct AsyncCallback_t389;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m21822(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3602 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16659_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Component>::Invoke(T,T)
#define Comparison_1_Invoke_m21823(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3602 *, Component_t555 *, Component_t555 *, const MethodInfo*))Comparison_1_Invoke_m16660_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Component>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m21824(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3602 *, Component_t555 *, Component_t555 *, AsyncCallback_t389 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16661_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m21825(__this, ___result, method) (( int32_t (*) (Comparison_1_t3602 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16662_gshared)(__this, ___result, method)
