#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Threading.Tasks.Task>
struct Comparison_1_t5996;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1211;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m31090(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5996 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21770_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Threading.Tasks.Task>::Invoke(T,T)
#define Comparison_1_Invoke_m31091(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5996 *, Task_t1211 *, Task_t1211 *, const MethodInfo*))Comparison_1_Invoke_m21771_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Threading.Tasks.Task>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m31092(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5996 *, Task_t1211 *, Task_t1211 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21772_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Threading.Tasks.Task>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m31093(__this, ___result, method) (( int32_t (*) (Comparison_1_t5996 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21773_gshared)(__this, ___result, method)
