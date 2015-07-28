#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Net.Cookie>
struct Comparison_1_t8559;
// System.Object
struct Object_t;
// System.Net.Cookie
struct Cookie_t3962;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Net.Cookie>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m63029(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8559 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21429_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Net.Cookie>::Invoke(T,T)
#define Comparison_1_Invoke_m63030(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8559 *, Cookie_t3962 *, Cookie_t3962 *, const MethodInfo*))Comparison_1_Invoke_m21430_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Net.Cookie>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m63031(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8559 *, Cookie_t3962 *, Cookie_t3962 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21431_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Net.Cookie>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m63032(__this, ___result, method) (( int32_t (*) (Comparison_1_t8559 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21432_gshared)(__this, ___result, method)
