#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Tuple`2<System.Type,System.Type>>
struct Comparison_1_t6009;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1391;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m31331(__this, ___object, ___method, method) (( void (*) (Comparison_1_t6009 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21499_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::Invoke(T,T)
#define Comparison_1_Invoke_m31332(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t6009 *, Tuple_2_t1391 *, Tuple_2_t1391 *, const MethodInfo*))Comparison_1_Invoke_m21500_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m31333(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t6009 *, Tuple_2_t1391 *, Tuple_2_t1391 *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21501_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Tuple`2<System.Type,System.Type>>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m31334(__this, ___result, method) (( int32_t (*) (Comparison_1_t6009 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21502_gshared)(__this, ___result, method)
