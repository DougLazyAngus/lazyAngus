#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.WeakReference>
struct Comparison_1_t6026;
// System.Object
struct Object_t;
// System.WeakReference
struct WeakReference_t2224;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.WeakReference>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m31328(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6026 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21750_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.WeakReference>::Invoke(T,T)
#define Comparison_1_Invoke_m31329(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6026 *, WeakReference_t2224 *, WeakReference_t2224 *, const MethodInfo*))Comparison_1_Invoke_m21751_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.WeakReference>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m31330(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6026 *, WeakReference_t2224 *, WeakReference_t2224 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21752_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.WeakReference>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m31331(__this, ___result, method) (( int32_t (*) (Comparison_1_t6026 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21753_gshared)(__this, ___result, method)
