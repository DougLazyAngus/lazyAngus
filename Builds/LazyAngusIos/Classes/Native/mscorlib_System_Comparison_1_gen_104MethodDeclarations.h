#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Type>
struct Comparison_1_t8545;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t385;
// System.AsyncCallback
struct AsyncCallback_t386;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m62571(__this, ___object, ___method, method) (( void (*) (Comparison_1_t8545 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m21738_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Type>::Invoke(T,T)
#define Comparison_1_Invoke_m62572(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t8545 *, Type_t *, Type_t *, const MethodInfo*))Comparison_1_Invoke_m21739_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Type>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m62573(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t8545 *, Type_t *, Type_t *, AsyncCallback_t386 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m21740_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m62574(__this, ___result, method) (( int32_t (*) (Comparison_1_t8545 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m21741_gshared)(__this, ___result, method)
