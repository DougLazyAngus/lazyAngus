#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t3626;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t578;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<UnityEngine.Component>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m21980(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3626 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16807_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Component>::Invoke(T,T)
#define Comparison_1_Invoke_m21981(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3626 *, Component_t578 *, Component_t578 *, const MethodInfo*))Comparison_1_Invoke_m16808_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Component>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m21982(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3626 *, Component_t578 *, Component_t578 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16809_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Component>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m21983(__this, ___result, method) (( int32_t (*) (Comparison_1_t3626 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16810_gshared)(__this, ___result, method)
